#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
  cin>>n>>k;
  string a;
  cin>>a;
  int count =0;
  for (int i = 0; i < n;)
  {
    if(a[i]=='B'){
     count++;
     
     i+=k;
    }else{
      i++;
    }
  }
  cout<<count<<endl;
  
  }
  
  
}