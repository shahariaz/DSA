#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    int move =0;
    int uc=0;
    int bc=0;
    for(auto u:s){
      if(u=='('){
        uc++;
      }
      else if(u==')'){
          if(uc>=1){
            move++;
            uc--;
          }
      }else if(u=='['){
           bc++;
      }else{
         if(bc>=1){
          move++;
          bc--;
         }
      }
    }
    cout<<move<<endl;
  }
  
}