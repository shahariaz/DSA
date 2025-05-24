#include<bits/stdc++.h>
using namespace std;


int main(){
  string s;
  cin>>s;
  int count =0;
  int t=0;
  for(int i=0;i<s.size();i++){
    if(count==5){
      t+=1;
      count =0;
    }
    if(s[i]==s[i+1]){
      count++;
    }
    if(s[i]!=s[i+1]){
      t++;
      count=0;
    }
     
  }
  cout<<t<<endl;
}