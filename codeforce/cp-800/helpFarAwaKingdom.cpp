
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int last;
    int first;
    int priction;
   
    
    for (int i = 0; i < s.size(); i++) { 
        if (s[i] == '.') {
            first = stoi(string(1,s[0]));
            last = stoi(string(1, s[i - 1]));
            priction = stoi(string(1, s[i + 1]));
            break;
        }
    }
    if(last != 9   && priction < 5){
      for(int i =0;i<s.size();i++){
        if(s[i]=='.'){
         
          break;
        }
        cout<<s[i];
      }
    }
   else if(last !=9 && priction>=5){
      for(int i =0;i<s.size();i++){
        if(s[i+1]=='.'){
           cout<<last+1;
          break;
        }
        cout<<s[i];
      }
    }
    else{
      cout<<"GOTO Vasilisa.\n";
    }

   
    return 0;
}
 