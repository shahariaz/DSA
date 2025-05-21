#include<bits/stdc++.h>
using namespace   std;

int main(){
  int n; cin>>n;
  vector<int> arr(n);
  for(auto &u:arr) cin>> u;
  sort(arr.rbegin(),arr.rend());
  if(arr[0]==1){
    cout<<"HARD\n";
  }else{
    cout<<"EASY\n";
  }
}