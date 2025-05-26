#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<string,string> mp;
 while (n--)
 {
  string s;
  cin>>s;
  if(mp[s]=="YES"){
  cout<<"YES\n";
  }else{
    cout<<"NO\n";
    mp[s]="YES";
  }
 }
 

}