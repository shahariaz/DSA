#include<bits/stdc++.h>
using namespace std;



int main(){
  int t;
  cin>>t;
  while (t--)
  {
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   int total=n*m;
   int count =1;
   int hl=n-a;
   int vl=m-b;
   while (total>1)
   {
    if(n<m){
    total-=hl*vl;
     hl--;
     count++;
     n--;
   }else if(n>m){
    total-=hl*vl;
    vl--;
    count++;
    m--;
   }else{
    total-=hl*vl;
    a--;
    b--;
    count++;
   }
  }
  cout<<count<<endl;
}
}
  
