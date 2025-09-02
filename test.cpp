#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int r = 0;
    int wi = 0;
    int four = 0;
    int six = 0;
    int b = s.length();
    
    for (char c : s) {
        if (c == 'W') {
            wi++;
        } else {
            int rs = c - '0';
            r += rs;
            
            if (rs == 4) {
                four++;
            } else if (rs == 6) {
                six++;
            }
        }
    }
    
    int totalO = b / 6;
    int ballLeft = b % 6;
    
    cout << "Total r: " << r << endl;
    cout << "Wicket: " << wi << endl;
    cout << "Four: " << four << endl;
    cout << "Six: " << six << endl;
    cout << "Over: " << totalO << "." << ballLeft << endl;
    
    return 0;
}