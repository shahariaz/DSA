#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int a = 1; a < n; ++a) {
        for (int b = a + 1; b < n; ++b) {
            int c_squared = a * a + b * b;
            int c = sqrt(c_squared);
            if (c * c == c_squared && c <= n) {
                ++count;
            }
        }
    }

    cout << count << endl;
    return 0;
}
