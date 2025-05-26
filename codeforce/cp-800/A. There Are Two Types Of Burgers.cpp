#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
  int b,p,f;
  cin>>b>>p>>f;
  int h,c;
  cin>>h>>c;
  int pro=0;
  if(h>c){
    int a = (b+1)/2;
    pro+= h*p;
    b-=p*2;
   
    pro+=a*f;
    cout<<pro<<endl;
  }else{
    pro+= c*f;
    b-=f*2;
    int a = (b+1)/2;
    pro+=a*p;
    cout<<pro<<endl;
  }
}

}