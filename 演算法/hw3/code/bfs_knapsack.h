#ifndef BFS_KNAPSACK_H
#define BFS_KNAPSACK_H

#include <vector>
#include <queue>
using namespace std;

struct BFSNode {
    int index;
    int remainingWeight;
    int currentValue;
};

// 廣度優先搜尋
int bfs(const vector<int>& weights, const vector<int>& values, int W, int& nodesVisited) {
    int n = weights.size();
    queue<BFSNode> q;
    q.push({0, W, 0});
    int maxValue = 0;

    while (!q.empty()) {
        BFSNode node = q.front(); q.pop();
        nodesVisited++;

        if (node.index == n) {
            maxValue = max(maxValue, node.currentValue);
            continue;
        }

        // 不選
        q.push({node.index + 1, node.remainingWeight, node.currentValue});

        // 選
        if (node.remainingWeight >= weights[node.index]) {
            q.push({node.index + 1, node.remainingWeight - weights[node.index],
                    node.currentValue + values[node.index]});
        }
    }

    return maxValue;
}

#endif
