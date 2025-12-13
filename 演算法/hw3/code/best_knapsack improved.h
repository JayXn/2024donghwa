// best_knapsack.h - Version B (improved bound and pruning)
#ifndef BEST_KNAPSACK_H2
#define BEST_KNAPSACK_H2

#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Node2 {
    int index;
    int remainingWeight;
    int currentValue;
    int bound;
    bool operator<(const Node2& other) const {
        return bound < other.bound; // 最大堆
    }
};

int calculateBound2(int index, int remainingWeight, const vector<int>& weights, const vector<int>& values) {
    int n = weights.size();
    double bound = 0;
    int weightSum = 0;

    for (int i = index; i < n; ++i) {
        if (weightSum + weights[i] <= remainingWeight) {
            weightSum += weights[i];
            bound += values[i];
        } else {
            bound += values[i] * (double)(remainingWeight - weightSum) / weights[i];
            break;
        }
    }
    return (int)bound;
}

int bestFirstSearch2(const vector<int>& weights, const vector<int>& values, int W, int& nodesVisited) {
    int n = weights.size();
    priority_queue<Node2> pq;

    int initialBound = calculateBound2(0, W, weights, values);
    pq.push({0, W, 0, initialBound});
    int maxValue = 0;

    while (!pq.empty()) {
        Node2 node = pq.top(); pq.pop();
        nodesVisited++;

        if (node.index == n || (node.currentValue + node.bound) <= maxValue)
            continue;

        // 嘗試不選
        int skipBound = calculateBound2(node.index + 1, node.remainingWeight, weights, values);
        pq.push({node.index + 1, node.remainingWeight, node.currentValue, skipBound});

        // 嘗試選擇
        if (node.remainingWeight >= weights[node.index]) {
            int takeValue = node.currentValue + values[node.index];
            int takeRemaining = node.remainingWeight - weights[node.index];
            int takeBound = calculateBound2(node.index + 1, takeRemaining, weights, values);
            pq.push({node.index + 1, takeRemaining, takeValue, takeBound});
            maxValue = max(maxValue, takeValue);
        }
    }

    return maxValue;
}

#endif
