#include<bits/stdc++.h>
using namespace std;



int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];
    int mV =arr[0];
    if(a==1){
      mV= max(mV,(arr[0]));
      mV=max(mV,(b-arr[0])*2);
    }else{
      for(int i=0;i<a;i++){
       if(i==a-1){
         mV= max(mV,(b-arr[i])*2);
        }else{
         mV=max(( arr[i+1]-arr[i]),mV);
        }
    }
    }
   
    cout<<mV<<endl;
  }
 
  
}