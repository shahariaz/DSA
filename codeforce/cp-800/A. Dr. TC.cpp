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
    int zero = count(s.begin(),s.end(),'0');
    int one = count(s.begin(),s.end(),'1');
    if(zero==0 && one>1){
      cout<<one<<endl;
    }else{
      cout<<(zero+(one*(n-zero)))<<endl;
    }

  }
  
}