#include<bits/stdc++.h>
using namespace std;

int main(){

  string a;
  cin>>a;
  int p=0;
  sort(a.begin(),a.end());
  cout<<a.size();
  for (int i = 0; i < a.size(); i++)
  {
    if((a[i])==a[i+1] ){
      continue;
    }else{
      p++;
    }
  }
  cout<<(p%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");
  

}