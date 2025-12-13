#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "dfs_knapsack.h"
#include "bfs_knapsack.h"
#include "best_knapsack.h"
#include "best_knapsack improved.h"
using namespace std;

// 隨機產生 weights 和 values
void generateData(int n, int wMin, int wMax, vector<int>& weights, vector<int>& values, int& capacity) {
    weights.clear(); values.clear();
    int totalWeight = 0;
    for (int i = 0; i < n; ++i) {
        int w = rand() % (wMax - wMin + 1) + wMin;
        int v = rand() % 100 + 1;
        weights.push_back(w);
        values.push_back(v);
        totalWeight += w;
    }
    capacity = totalWeight / 2; // 給一半的總重量當背包容量
}

int main() {
    srand(time(0));
    
    vector<int> testNs = {10, 15, 20};
    vector<pair<int, int>> testRanges = {{1, 10}, {10, 100}};

    for (int n : testNs) {
        for (auto [wMin, wMax] : testRanges) {
            vector<int> weights, values;
            int capacity;
            generateData(n, wMin, wMax, weights, values, capacity);

            cout << "\n===== Test: n=" << n << ", range=[" << wMin << "-" << wMax << "], capacity=" << capacity << " =====\n";

            // DFS
            int dfsNodes = 0;
            vector<vector<int>> memo(n, vector<int>(capacity + 1, -1));
            int dfsValue = dfs(0, capacity, weights, values, memo, dfsNodes);

            // BFS
            int bfsNodes = 0;
            int bfsValue = bfs(weights, values, capacity, bfsNodes);

            // Best-First
            int bestNodes = 0;
            int bestValue = bestFirstSearch(weights, values, capacity, bestNodes);

            // Best-First Improved
            int bestImprovedNodes = 0;
            int bestImprovedValue = bestFirstSearch2(weights, values, capacity, bestImprovedNodes);
            // 顯示結果
            cout << "DFS:         MaxVal=" << dfsValue << " | Nodes=" << dfsNodes << endl;
            cout << "BFS:         MaxVal=" << bfsValue << " | Nodes=" << bfsNodes << endl;
            cout << "Best-First:  MaxVal=" << bestValue << " | Nodes=" << bestNodes << endl;
            cout << "Best-First2: MaxVal=" << bestImprovedValue << " | Nodes=" << bestImprovedNodes << endl;
        }
    }

    return 0;
}
