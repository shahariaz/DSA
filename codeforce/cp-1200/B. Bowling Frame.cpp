#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        int k = floor((-1 + sqrt(1 + 8.0 * sum)) / 2);

        cout << k << endl;
    }

    return 0;
}
