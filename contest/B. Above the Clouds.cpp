#include <bits/stdc++.h>
using namespace std;

// Define min_val and max_val as inline functions outside main
inline int min_val(int x, int y) { return x < y ? x : y; }
inline int max_val(int x, int y) { return x > y ? x : y; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr) {
            cin >> i;
        }

        if (n < 2) {
            cout << "-1\n";
            continue;
        }

        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) <= 1) {
                cout << "0\n";
                ok = true;
                break;
            }
        }
        if (ok) continue;

        int ans = -1;
        for (int start = 0; start < n; ++start) {
            int low = arr[start];
            int high = arr[start];
            for (int end = start + 1; end < n; ++end) {
                low = min_val(low, arr[end]);
                high = max_val(high, arr[end]);
                int changes = end - start;

                if (start > 0) {
                    int left = arr[start - 1];
                    if (max_val(low, left - 1) <= min_val(high, left + 1)) {
                        if (ans == -1 || changes < ans) {
                            ans = changes;
                        }
                    }
                }

                if (end < n - 1) {
                    int right = arr[end + 1];
                    if (max_val(low, right - 1) <= min_val(high, right + 1)) {
                        if (ans == -1 || changes < ans) {
                            ans = changes;
                        }
                    }
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}