#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while (n--)
  {
    string s;
    cin>>s;
    int k = s.size();
    if(k<=10){
     cout<<s<<endl;
    }else{
      cout<<s[0]<<k-2<<s[k-1]<<endl;
    }
  }
  
}