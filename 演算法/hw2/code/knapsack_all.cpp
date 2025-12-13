#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int profit;
};

// 隨機生成物品數據
vector<Item> generate_items(int n, int weight_min, int weight_max, int profit_min, int profit_max) {
    vector<Item> items;
    mt19937 rng(random_device{}());  // 隨機數生成器
    uniform_int_distribution<int> weight_dist(weight_min, weight_max);
    uniform_int_distribution<int> profit_dist(profit_min, profit_max);

    for (int i = 0; i < n; ++i) {
        items.push_back({weight_dist(rng), profit_dist(rng)});
    }
    return items;
}

// Top-Down 動態規劃算法
int top_down_helper(int i, int w, const vector<Item>& items, vector<vector<int>>& memo) {
    if (i == 0 || w == 0) return 0;
    if (memo[i][w] != -1) return memo[i][w];

    if (items[i-1].weight > w)
        return memo[i][w] = top_down_helper(i-1, w, items, memo);
    else
        return memo[i][w] = max(
            top_down_helper(i-1, w, items, memo),
            top_down_helper(i-1, w - items[i-1].weight, items, memo) + items[i-1].profit
        );
}

int knapsack_top_down(const vector<Item>& items, int capacity) {
    int n = items.size();
    vector<vector<int>> memo(n + 1, vector<int>(capacity + 1, -1));
    return top_down_helper(n, capacity, items, memo);
}

// Bottom-Up 動態規劃算法
int knapsack_bottom_up(const vector<Item>& items, int capacity) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (items[i-1].weight > w)
                dp[i][w] = dp[i-1][w];
            else
                dp[i][w] = max(dp[i-1][w], dp[i-1][w - items[i-1].weight] + items[i-1].profit);
        }
    }

    return dp[n][capacity];
}

// Greedy 演算法
int knapsack_greedy(const vector<Item>& items, int capacity) {
    int n = items.size();
    vector<Item> sorted_items = items;
    
    // 根據價值/重量比率排序
    sort(sorted_items.begin(), sorted_items.end(), [](const Item& a, const Item& b) {
        return (double)a.profit / a.weight > (double)b.profit / b.weight;
    });

    int total_profit = 0;
    int total_weight = 0;

    for (const Item& item : sorted_items) {
        if (total_weight + item.weight <= capacity) {
            total_weight += item.weight;
            total_profit += item.profit;
        } else {
            break; // 不能再放更多物品
        }
    }

    return total_profit;
}

// 主程式：手動或自動生成資料
int main() {
    int n, capacity, weight_min, weight_max, profit_min, profit_max;
    
    // 輸入測試參數
    cout << "請輸入物品數量 N: ";
    cin >> n;
    cout << "請輸入背包容量: ";
    cin >> capacity;
    cout << "請輸入物品重量範圍 (weight_min weight_max): ";
    cin >> weight_min >> weight_max;
    cout << "請輸入物品價值範圍 (profit_min profit_max): ";
    cin >> profit_min >> profit_max;

    // 自動生成測試數據
    auto items = generate_items(n, weight_min, weight_max, profit_min, profit_max);

    // 計算並顯示每個算法的結果
    auto start = chrono::high_resolution_clock::now();
    int result_top_down = knapsack_top_down(items, capacity);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_top_down = end - start;
    cout << "Top-Down 最大價值: " << result_top_down << endl;
    cout << "Top-Down 執行時間: " << duration_top_down.count() << " 秒" << endl;

    start = chrono::high_resolution_clock::now();
    int result_bottom_up = knapsack_bottom_up(items, capacity);
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_bottom_up = end - start;
    cout << "Bottom-Up 最大價值: " << result_bottom_up << endl;
    cout << "Bottom-Up 執行時間: " << duration_bottom_up.count() << " 秒" << endl;

    start = chrono::high_resolution_clock::now();
    int result_greedy = knapsack_greedy(items, capacity);
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_greedy = end - start;
    cout << "Greedy 最大價值: " << result_greedy << endl;
    cout << "Greedy 執行時間: " << duration_greedy.count() << " 秒" << endl;

    return 0;
}
