#include <bits/stdc++.h>
using namespace std;

int main() {
    int step[5] = {1, 2, 3, 4, 5};
    int n;
    cin >> n;
    int count = 0;
    int i = 4;
    while (n > 0 && i >= 0) {
        if (n >= step[i]) {
            count ++;
            n -= step[i];
        }
        else {
            i--;
        }
    }
    cout << count << endl;
    return 0;
}
