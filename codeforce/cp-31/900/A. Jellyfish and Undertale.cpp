#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int arr[n];
    for(auto &u:arr) cin>>u;
    int result=0;
    for(int i =0;i<n;i++){
      result+= min(arr[i],a);
    }
    cout<<result+abs(b-1)<<endl;
  }
}