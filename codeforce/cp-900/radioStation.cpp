#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  map<string,string> mp;
  while (n--)
  {
    string a,b;
    cin>>a>>b;
    mp[b+';']=a;
  }
  while (k--)
  {
    string a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<" "<<'#'<<mp[b]<<endl;
  }
  
  
}