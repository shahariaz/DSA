#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int s, int e) {
    if (s >= e) return;
    swap(arr[s], arr[e]);
    reverseArray(arr, s + 1, e - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
