#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool seen[256] = {false}; 
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            unsigned char c = s[i];
            if (!seen[c]) {
                ans += (n - i);
                seen[c] = true;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
