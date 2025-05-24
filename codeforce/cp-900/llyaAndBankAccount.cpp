#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

  
    if (stoi(s) >= 0) {
        cout << s << endl;
        return 0;
    }

    int n = s.size();
    char secondLast = s[n - 2];
    char last = s[n - 1];

   
    if (last > secondLast) {
        s.erase(n - 2, 1); 
    } else {
        s.erase(n - 1, 1);  
    }

   
    if (s == "-0") s = "0";

    cout << s << endl;
    return 0;
}
