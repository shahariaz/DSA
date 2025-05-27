#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &u:arr) cin>> u;
    vector<int>a(n);
    set<int>b;
    int c=0;
    for(int i=0;i<n-1;i++){
      c= arr[i+1]-arr[i];
      b.insert(c);
    }
    cout<<(b.size())<<endl;
  }
  
} 