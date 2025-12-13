// best_knapsack.h - Version A (current simple version)
#ifndef BEST_KNAPSACK_H
#define BEST_KNAPSACK_H

#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Node {
    int index;
    int remainingWeight;
    int currentValue;
    int bound;
    bool operator<(const Node& other) const {
        return bound < other.bound; // 最大堆
    }
};

int calculateBound(int index, int remainingWeight, const vector<int>& weights, const vector<int>& values) {
    int n = weights.size();
    double result = 0;
    int weightSum = 0;

    for (int i = index; i < n; ++i) {
        if (weightSum + weights[i] <= remainingWeight) {
            weightSum += weights[i];
            result += values[i];
        } else {
            result += values[i] * (double)(remainingWeight - weightSum) / weights[i];
            break;
        }
    }

    return (int)result;
}

int bestFirstSearch(const vector<int>& weights, const vector<int>& values, int W, int& nodesVisited) {
    int n = weights.size();
    priority_queue<Node> pq;

    int initialBound = calculateBound(0, W, weights, values);
    pq.push({0, W, 0, initialBound});
    int maxValue = 0;

    while (!pq.empty()) {
        Node node = pq.top(); pq.pop();
        nodesVisited++;

        if (node.index == n || node.bound <= maxValue)
            continue;

        // 節點1：不選
        int skipBound = calculateBound(node.index + 1, node.remainingWeight, weights, values);
        pq.push({node.index + 1, node.remainingWeight, node.currentValue, skipBound});

        // 節點2：選
        if (node.remainingWeight >= weights[node.index]) {
            int takeValue = node.currentValue + values[node.index];
            int takeRemaining = node.remainingWeight - weights[node.index];
            int takeBound = calculateBound(node.index + 1, takeRemaining, weights, values);
            pq.push({node.index + 1, takeRemaining, takeValue, takeBound});
            maxValue = max(maxValue, takeValue);
        }
    }

    return maxValue;
}

#endif
