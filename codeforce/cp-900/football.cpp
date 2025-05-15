#include<bits/stdc++.h>
using namespace std;


int main(){
  string s;
  cin >>s;
  int d=0;
  for(int i =0;i <s.size()-1;i++){
    if(s[i]==s[i+1]){
    // cout<<s[i];
     d++;
    }
    else  if (d>=6){
      break;
    }else{
      d=0;
    }
   
  }
  // cout<<d<<endl;
  if(d>=6){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }


}