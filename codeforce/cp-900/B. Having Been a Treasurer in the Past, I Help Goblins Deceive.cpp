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
    int dashCount = count(s.begin(),s.end(),'-');
    int underscoreCount = count(s.begin(),s.end(),'_');
    long long x = dashCount/2;
    long long y = (dashCount+1)/2;
    long long ans =0;
    for(int u=1;u<=underscoreCount;u++){
      ans+=x*y;
    }
    cout<<ans<<"\n";

  }
  
}