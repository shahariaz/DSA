#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
    long long arr[n];
    for(auto &u:arr) cin>>u;
    long long result=0;
    for(int i =0;i<n;i++){
      result+= min(arr[i],a-1);
    }
    cout<<result+b<<endl;
  }
}