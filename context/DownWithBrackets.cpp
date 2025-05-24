#include <bits/stdc++.h>
using namespace std;

bool isbld(string s) {
    int bl = 0;
    for (char c : s) {
        if (c == '(') bl++;
        else bl--;
        if (bl < 0) return false; //
    }
    return bl == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s; 
        
        bool ub = false;
        int n = s.length();
        
        
        for (int i = 0; i < n; i++) {
            if (s[i] != '(') continue; 
            for (int j = i + 1; j < n; j++) {
                if (s[j] != ')') continue; 
              
                string newS = s.substr(0, i) + s.substr(i + 1, j - i - 1) + s.substr(j + 1);
                if (!isbld(newS)) {
                    ub = true;
                    break;
                }
            }
            if (ub) break;
        }
        
        cout << (ub ? "YES" : "NO") << endl;
    }
    return 0;
}