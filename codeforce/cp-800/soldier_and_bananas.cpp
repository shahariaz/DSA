#include<bits/stdc++.h>
using namespace std;

int main(){
  int k,n,w;
  cin >> k>>n>>w;
  int p=0;
  for(int i =1; i<=w;i++){  
   p+=k*i;
  }
 if(p>n){
  cout<<(p-n)<<endl;
 }else{
  cout<<0<<endl;
 }
}