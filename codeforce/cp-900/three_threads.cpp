#include<bits/stdc++.h>
using namespace std;



int  main(){
  int t;
  cin >>t;
  while(t--){
    int a,b,c;
    cin >>a >>b >>c;
    if(a==b && a==c){
      cout<<"YES"<<endl;
    }
   else if((b%a==0 && c%a ==0) && ((b/a)-1) +((c/a)-1) <=3 ){
      cout<<"YES"<<endl;
    }
   else{
    cout<<"NO"<<endl;
   }
  }
}