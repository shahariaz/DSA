#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n-1];
    for(auto &u:arr) cin>>u;
    int ne=0;
    int p=0;
    for(auto u:arr) {
      if(u>=0){
       p+=u;
      }else{
        ne+=u;
      }
    }
   if((ne+p)>=0) cout<< -(ne+p)<<endl;
   else cout<<(abs(ne+p))<<endl;
  }
}