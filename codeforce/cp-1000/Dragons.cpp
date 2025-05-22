#include<bits/stdc++.h>
using namespace std;   
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
  optimize();
  int s,n; cin>>s>>n;
  bool ok =1;
  while (n--)
  {
    int a,b; cin>>a>>b;
    if(a>s && b>s){
      ok=0;
      break;
    }
    else if(a<s && a>b){
      s+=b;
    }else{
      s+=b;
    } 
  }
  cout<<(ok==0 ? "NO\n":"YES\n");

  
}