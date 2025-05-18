#include<bits/stdc++.h>
using namespace std;



int main(){
  int n,h;
  cin>>n>>h;
  int a[n];
  for (int i = 0; i < n; i++) cin>>a[i];
  int width =0;
  for(auto u:a) width+= (u>h)? 2 : 1;
  cout<<width;
  
}