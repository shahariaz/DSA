#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define vec vector
#define pb push_back
#define INF INT_MAX

using ll = long long;
using ull = unsigned long long;
using ui = unsigned int;

const int MOD = 998244353;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

vec<int> pow2 = {1};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    int maxN = 0;

    while (T--) {
        int n;
        cin >> n;
        vec<int> p(n), q(n), posP(n), posQ(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            posP[p[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> q[i];
            posQ[q[i]] = i;
        }
        if ((int)pow2.size() <= n) {
            int old = pow2.size();
            pow2.resize(n + 1);
            for (int i = old; i <= n; i++) {
                pow2[i] = (pow2[i - 1] * 2) % MOD;
            }
        }
        vec<int> Pmax(n), Qmax(n);
        Pmax[0] = p[0];
        Qmax[0] = q[0];
        for (int i = 1; i < n; i++) {
            Pmax[i] = max(Pmax[i - 1], p[i]);
            Qmax[i] = max(Qmax[i - 1], q[i]);
        }
        vec<int> r(n);
        for (int i = 0; i < n; i++) {
            int e = max(Pmax[i], Qmax[i]);
            int s;
            if (Pmax[i] > Qmax[i]) {
                int j = posP[e];
                int k = i - j;
                s = q[k];
            } else if (Qmax[i] > Pmax[i]) {
                int k = posQ[e];
                int j = i - k;
                s = p[j];
            } else {
                int j1 = posP[e];
                int k1 = i - j1;
                int s1 = (k1 >= 0 && k1 < n ? q[k1] : -1);
                int k2 = posQ[e];
                int j2 = i - k2;
                int s2 = (j2 >= 0 && j2 < n ? p[j2] : -1);
                s = max(s1, s2);
            }
            int val = (pow2[e] + pow2[s]) % MOD;
            r[i] = val;
        }
        for (int i = 0; i < n; i++) {
            cout << r[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
