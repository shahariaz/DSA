#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>> n;
  set<int>level;
  int p;
  cin>>p;
  int arrp[p];
  for(int i =0;i<p;i++){
    cin>>arrp[i];
    level.insert(arrp[i]);
  }
  int q;
  cin>>q;
  int arrq[q];
  for(int i =0;i<q;i++){
    cin>>arrq[i];
    level.insert(arrq[i]);
  }
  int c =1;

  // for(int i =1;i<=n;i++){
  //   if(level.count(i) == 0){
  //     c=0;
  //     break;
  //   }
  // }
  // if(c==1){
  //   cout<<"I become the guy.";
  // }else cout<<"Oh, my keyboard!";

  if(level.size()==n){
    cout<<"I become the guy.";
  }else cout<<"Oh, my keyboard!";
}