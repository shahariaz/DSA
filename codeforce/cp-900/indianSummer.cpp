#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<pair<string,string>> leap(n);
  for(int i=0;i<n;i++){
    cin>>leap[i].first>>leap[i].second;
  }
  sort(leap.begin(),leap.end());
  int u = unique(leap.begin(),leap.end()) - leap.begin();
  cout<<u;
}