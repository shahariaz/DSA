#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  string k;
  map<char,char> mp= {{'9','0'},{'8','1'},{'7','2'},{'6','3'},{'5','4'}};
  for(int i=0;i<s.size();i++){
    if(s[i]=='9' && i==0){
      k+=s[i];
    }
    else if(s[i]>'4'){
      k+= mp[s[i]];
    }else{
      k+=s[i];
    }
  }
  cout<<k<<endl;
}