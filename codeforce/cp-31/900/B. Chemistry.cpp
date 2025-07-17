#include<bits/stdc++.h>
using namespace std;




int  main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count =0;
    int even =0;
    map<char,int> m;
    for(auto u:s) m[u]++;
    for(auto u:m) {
      if(u.second %2 !=0) count++;
   
    }
    // for(auto u:m) cout<<u.first<<" "<<u.second<<endl;
    // cout<<count<<endl;
   if(count<=k+1){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
     
  }
}