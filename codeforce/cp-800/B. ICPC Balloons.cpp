#include<bits/stdc++.h>
using namespace std;

int main(){

  int  t; cin>>t;
  while (t--)
  {
    int n;cin>>n;
    string s;cin>>s;
    sort(s.begin(),s.end());
    int ans =0;
    for(int i=0;i<n;i++){
      if(s[i]!=s[i+1]){
        ans+=2;
      }
      else{
        ans++;
      }
    }
    cout<<ans<<endl;
  }
  
}