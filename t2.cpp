#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX; // Store the minimum price found so far
    int maxProfitValue = 0; // Store the maximum profit

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Update the minimum price
        } else {
            maxProfitValue = max(maxProfitValue, prices[i] - minPrice); // Compute profit
        }
    }

    return maxProfitValue;
}

int main() {
    vector<int> prices{7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl; // Expected output: 5 (Buy at 1, Sell at 6)
}
