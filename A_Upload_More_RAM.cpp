#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    if(n-1 ==0) cout<<1<<endl;
    else{
      cout<<((n-1)*k)+1<<endl;
    }
  }
}