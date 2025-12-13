# Lab 04. Greedy: Spanning Trees

> A heuristic is a strategy that ignores part of the information, 
> with the goal of making decisions more quickly, frugally, 
> and/or accurately than more complex methods 
>
> <p align="right">S. Chow, "Many Meanings of 'Heuristic'", The British Journal for the Philosophy of Science</p>

Greedy is a paradigm follows some heuristic of making the locally optimal operation at each stage/phase. 
Greedy algorithms may not always find the optimal solution. 
The greedy heuristic still can produce good enough solutions that approximate a globally optimal solution in a reasonable amount of time.

## Change-making problem 

Change-making is a classical problem that asking you to use as few coins as possible to combine the specified amount. The mathematical description is followed: 

> Instance: a set of dinstinct positive integers $C = \{c_1, c_2, \dots, c_n \}$ and a goal $m \in \mathbb{N}$.
>
> Result: a set of integer factors $A = \{a_1, a_2, \dots, a_n\}$ that $\sum_{i = 1}^{n} a_i c_i = m$ and minimize $\sum_{i = 1}^{n} a_i$

For above problem, we may use the heuristic "larger value may reach the specified amount faster" to design and implement the algorithm as below:

```C++
#include <vector>
#include <algorithm>
typedef std::vector<int> IntList;

IntList change_making(IntList& C, int m) {
    IntList A(C.size(), 0);
    std::sort(C.begin(), C.end());
    // Try coins throw max to min
    for (size_t i = C.size(); m > 0 && i > 0; ) {
        if (C[i] <= m) {
            ++A[i];
            m -= C[i];
        } else
            --i;
    }
    // no way to combine specified amount, return nothing
    if (m > 0) A.clear();
    return A;
}
```

If $C = \{1, 5, 10, 50\}$, above algorithm always produce one of optimal solution. 
But, if $C = \{1, 3, 5, 10\}$, for $m = 9$, $3 \times 3$ is better than the product result $5 \times 1 + 1 \times 4$.

## Minimum spanning tree

#### Definition 1. For a graph $G = (V, E)$, we say it is connected if $\forall u, v \in V$ exists path from $u$ to $v$. 

#### Definition 2. For a connected graph $G = (V, E)$, we can made subgraphs by remove some edges, $G' = (V, E')$ where $E' \subseteq E$ if $G'$ is connected and no cycles in $E'$, we say $G'$ is a spanning tree of $G$.

#### Definition 3. For a weighted connected graph $G = (V, E)$, minimum spanning tree is a spanning tree $T = (V, E')$ that minimize $\sum_{e \in E'} w(e)$. 

#### Lemma 1. If all edges in graph $G = (V, E)$ is distinct, then $G$ has a unique mimimum spanning tree. 

__Proof:__
1. Let graph $G = (V, E)$ have 2 minimum spanning tree $T_1 = (V, E_1)$ and $T_2 = (V, E_2)$.
2. Let $e_1$ be the minimum-weight edge of $E_1 \setminus E_2$.
3. Let $e_2$ be the minimum-weight edge of $E_2 \setminus E_1$. Assume that $w(e_1) < w(e_2)$.
4. Let $T_2' = (V, E_2 \cup \{e_1\})$. $T_2'$ consists exactly one cycle $C$ which passthrough the edge $e_1$.
5. Let $e_2'$ is an edge that $e_2' \in C$ and $e_2' \notin T_1$. ($e_2'$ may be or may not be $e_2$ here)
6. $e_1 \in T_1 \to e_1 \neq e_2'$. and the same reason, $e_2' \in E_2 \setminus E_1$. 
7. By step 3, we have $w(e_1) < w(e_2) \leq w(e_2')$.
8. Consider spanning tree $T_2' = T_2 + e_1 - e_2'$, we have $w(T_2') = w(T_2) + w(e_1) - w(e_2') \leq w(T_2)$
9. Since $T_2$ is minimum spanning tree, we must have $w(T_2') = w(T_2)$. 
10. By step 8 and 9, we have $w(e_1) = w(e_2')$, so we have $e_1 = e_2 = e_2'$, thus, $T_1 = T_2$ is the only minimum spanning tree of $G$. #QED. 

#### Definition 4. We say a edge $e$ is useless if its 2 endpoints are in the same componenets. 

#### Definition 5. We say a edge $e$ is safe if it is the minimum-weight edge with exactly one endpoint in some comonenet.


#### Lemma 2. Minimum spanning tree contains no useless edges.

__Proof:__ If we add any useless edge to a graph, it would produce a cycle.

#### Question 1.: Try to proof that minimum spanning tree of $G$ contains every safe edge.

### Prim's algorithm

By question 1. we can design an greedy algorithm for finding minimum spanning tree of $G = (V = \{v_1, \dots, v_n\}, E = \{e_1, \dots, e_m\})$ by heuristic function "finding a safe edge".

1. Let $T = (V_T = \{v_1\}, E_T = \{\})$ be the base component. 
2. Find a safe edge $e = (u, v)$ that $v \in V_T$ and $u \notin V_T$. 
3. $V_T \leftarrow V_T \cup \{u\}$, $E_T \leftarrow E_T \cup \{e\}$
4. Repeat step 2 and 3 until no safe edges.
 

We can implement the above algorithm as followed: 

```C++
#include <vector>
#include <list>

typedef int WeightType;
struct Edge {
    int u, v;
    WeightType w;
};

struct Graph {
    Graph(int n): E(n) {}
    std::vector<std::list<Edge> > E;
    void add_edge(int u, int v, WeightType w) {
        E[u].push_back({u, v, w});
        E[v].push_back({v, u, w});
    }
    int n() const { return E.size(); }
    int m() const {
        int res = 0;
        for (auto list: E)
            res += list.size();
        return res / 2; 
    }
};

#include <queue>

Graph MST(const Graph &G) {
    auto WeightComp = [](const Edge e1, const Edge e2) { return (e1.w > e2.w); };
    std::priority_queue<Edge, std::vector<Edge>, decltype(WeightComp)> candidates(WeightComp);
    // Step 1
    Graph T(G.n());
    std::vector<bool> visited(G.n(), false);
    visited[0] = true;
    // maintain candidates
    for (Edge e: G.E[0])
        candidates.push(e);
    while (true) {
        while (!candidates.empty()) {
            Edge temp = candidates.top();
            // Lemma 2. remove useless edges from candidates
            if (visited[temp.u] && visited[temp.v])
                candidates.pop();
            else
                break;
        }
        // If no more safe edges, end up the algorithm
        if (candidates.empty())
            break;
        // Step 2
        Edge safe = candidates.top();
        candidates.pop();
        // Step 3
        int u = visited[safe.v]? safe.u: safe.v;
        visited[u] = true;
        // maintain candidates
        T.add_edge(safe.u, safe.v, safe.w);
        for (Edge e: G.E[u]) {
            if (!visited[e.v])
                candidates.push(e);
        }
    }
    return T;
}
```

What datastructures you choose to implement your algorithm will significantly Affect the performance of your algorithm. We have many options to implement a Prim's algorithm, __Bold__ is what we use in above implement.

1. We may use adjacency matrix or __adjacency list__ to present a graph. 
2. We may use diffrent ways to check an edge is useless or not. By scanning will cost $O(n)$. By __hash__ will cost $O(1)$.
3. You may use different data strucutres to maintain candidates, above using heap which cost $O(\log n)$ on both push and pop.

We at most have $n$ rounds, each round will extract $1$ item from heap. At worst, we'll push all the edges to the candidates. Thus, our time complexity will be $O(n \log m + m \log m) = O(m \log m)$.

When you maintain the candidate, if you can guarentee that every new vertex in candidate is distinct, you can improve the time complexity to $O(m \log n)$.

#### Question 2. Please modified above algorithm to letfind minimum spanning forest on an unconnected graph $G$, and count the number of trees.

### Kruskal's algorithm

Kruskal's algorithm is another approach use Question 1. 

The algorithm is below: 
1. Sort and scan edges in increasing order by weight. 
2. If an edge is safe, combine it to $T$.
3. If the edge is useless, ignore it.

#### Question 3. Please design a function to detect an edge is useless or not and analyze the time complexity of Kurskal's algorithm which running with your useless checker.
> Hint: Use [Disjoint set](https://en.wikipedia.org/wiki/Disjoint-set_data_structure) may make your algorithm efficient. 

## One-to-all shortest path problem

#### Definition 6. A path is a sequence of vertices. We say a path $P = \{v_0, v_1, \dots, v_n\}$ is on a graph $G = (V, E)$ if $P \subseteq V$ and $(v_{i-1}, v_i) \in E$ for all $0 < i \leq n$.

#### Definition 7. Cost of a path is summantion of weight of all its edges. We can denote the cost of shortest path from $s$ to $t$ by $D_{s,t}$.

One to all shortest path is a problem that given a weighted graph $G = (V, E)$ and a start vertex $s \in V$ and asking you minimum cost from $s$ to every other vertices in $V$. 

Dijkstra conceived a greedy algorithm to solve above problem which is very familiar with Prim's algorithm. 
The only difference between them is the heuristic function. 

The heuristic of Prim's algorithm is finding safe edges, in other words, minimize $w(u, v)$ where $u \in T$ and $v \notin T$.
Dijkstra's algorithm is use not only the cost of the bridge edge, but also the minimum cost from the source to host vertex, in other words, minimize $D_{s, u} + w(u, v)$ where $u \in T$ and $v \notin T$. 

We can ease to rewrite Prim's algorithm to Dijkstra's algorithm by modify `WeightComp` and `maintain candidates`.

#### Question 4. `WeightComp` needs $D_{s,t}$ to measure which edge should choose. Giving a weighted rooted tree $T = (V, E)$ and a vertex $v \in V$, please design an algorithm can measure the path cost from root to $v$ and analyze its time complexity. 

We call the result tree of Dijkstra's algorithm a __shortest path tree__. 

If you don't want to know all one-to-all pair shortest path, you just need specific start vertex and goal vertex, you don't need to spanning whole shortest path tree. 

We can just span the vertex that near to our goal first. Avoid span useless vertices will make our program much faster. 

#### Question 5. Brief what is A* algorithm and explain why A* can always find the optimal answer.



