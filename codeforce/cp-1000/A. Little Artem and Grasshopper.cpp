#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    vector<bool> visited(n, false);
    int pointer = 0;

    while (pointer >= 0 && pointer < n) {
        if (visited[pointer]) {
            cout << "INFINITE" << endl;
            return 0;
        }
        visited[pointer] = true;

        if (s[pointer] == '>') {
            pointer += arr[pointer];
        } else {
            pointer -= arr[pointer];
        }
    }

    cout << "FINITE" << endl;
    return 0;
}
