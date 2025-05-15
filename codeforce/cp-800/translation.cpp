#include<bits/stdc++.h>
using namespace std;


int main(){
  string s,k;
  cin>>s;
  cin>>k;
  reverse(k.begin(),k.end());
  int q =0;
  if(s.size()!=k.size()){
    cout<<"NO"<<endl;
  }
  else{
   for(int i =0;i<s.size();i++){
    if(s[i]!=k[i]){
       q=-1;
    }
  }
  if(q==0){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
 }
}