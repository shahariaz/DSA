#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int s = (n)/m;
  int mtotal = (s+1)*b;
  int ltotal =n*a;
  int total=s*b;
  int l= n-s*m;
  total += l*a;
  total = min(total,mtotal);
  total = min(total,ltotal);
  cout<<total;
}