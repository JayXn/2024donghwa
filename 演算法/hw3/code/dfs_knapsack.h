#ifndef DFS_KNAPSACK_H
#define DFS_KNAPSACK_H

#include <vector>
using namespace std;

// 記憶化遞迴解法 (Top-down DP)
int dfs(int index, int remainingWeight, const vector<int>& weights, const vector<int>& values,
        vector<vector<int>>& memo, int& nodesVisited) {
    nodesVisited++;

    if (index == weights.size() || remainingWeight == 0)
        return 0;

    if (memo[index][remainingWeight] != -1)
        return memo[index][remainingWeight];

    // 不選
    int result = dfs(index + 1, remainingWeight, weights, values, memo, nodesVisited);

    // 選
    if (weights[index] <= remainingWeight) {
        int withItem = values[index] + dfs(index + 1, remainingWeight - weights[index], weights, values, memo, nodesVisited);
        result = max(result, withItem);
    }

    memo[index][remainingWeight] = result;
    return result;
}

#endif
