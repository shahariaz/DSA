#include<bits/stdc++.h>
using namespace std;


int  main(){
  int t;
  cin>>t;
  while ((t--))
  {
  long long n;
    cin >> n;
    cout << 2 * n -1<< endl;
    for(int i = 1; i <= n; i++) {
        cout << i << ' ' << 1 << ' ' << i << endl;;
        if(i != n)
        cout << i << ' ' << i + 1 << ' '  << n << endl;;
    }
  }
  
}