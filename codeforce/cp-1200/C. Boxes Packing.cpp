#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  map<int,int> mp;
  for(int i =0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  int ans =0;
  for(int i =0;i<n;i++) ans = max(ans,mp[arr[i]]);
  cout<<ans<<endl;
  

}