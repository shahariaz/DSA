#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int hash=0;
    int total=0;
    for(int i =0;i<n;i++){
         if(s[i]=='.'){
          count++;
         }
         else{
              if(count%2==0){
              total+= (count/2)+1;
              count=0;
              hash++;
             }else{
              total+=(count+1)/2;
              count=0;
              hash++;
             }
             
         }
    }
    if(hash==n){
       cout<<0<<endl;
    }else{
      if(count==n){
        if(count%2==0){
          total+= (count/2)+1;
         }else{
          total+=(count+1)/2;     
         }
       }
       cout<<total<<endl;
    }
  }
  
}