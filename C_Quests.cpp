#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (auto &u : a) cin >> u;
        for (auto &u : b) cin >> u;

        int limit = min(n, k);

        vector<long long> prefixSum(limit), prefixMax(limit), dp(limit);

        prefixSum[0] = a[0];
        prefixMax[0] = b[0];
        dp[0] = prefixSum[0] + (k - 1) * prefixMax[0];

        for (int i = 1; i < limit; i++) {
            prefixSum[i] = prefixSum[i - 1] + a[i];
            prefixMax[i] = max(prefixMax[i - 1], (long long)b[i]);

            long long curVal = prefixSum[i] + (k - (i + 1)) * prefixMax[i];
            dp[i] = max(dp[i - 1], curVal);
        }

        cout << dp[limit - 1] << "\n";
    }
    return 0;
}
