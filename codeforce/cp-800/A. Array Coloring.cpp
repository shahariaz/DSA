#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &u:arr) cin>>u;
    int sum =0;
    for( auto u:arr) sum+=u;
     if(sum%2 ==0){
      cout<<"Yes"<<endl;
     }else{
      cout<<"NO"<<endl;
     }

  }
  
}