#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n,r,b;
    cin>>n>>r>>b;
    int uiu = (r)/b+1;
   
    
   if(b ==1){
    int kui = (n+1)/2;
    for(int i =1;i<=n;i++){
        if((i)%kui ==0){
          if(b>0){
            cout<<'B';
          b--;
          }else{
            cout<<'R';
          }
        }else{
          cout<<'R';
        }
    }
    cout<<endl;
   }else{
     for(int i =1;i<=n;i++){
        if((i)%uiu == 0){
          if(b>0){
            cout<<'B';
          b--;
          }else{
            cout<<'R';
          }
        }else{
          cout<<'R';
        }

    }
    cout<<endl;
   }
  }
  
}