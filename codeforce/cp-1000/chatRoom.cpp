#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++;  
        }
        if (j == target.size()) break;
    }

    if (j == target.size()) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
