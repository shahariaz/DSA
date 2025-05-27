#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    // string s;
    // cin>>s;
    // int a= s[0]-'0';
    // int b= s[1]-'0';
    // int c = s[2]-'0';
    // int d= s[3]-'0';
    // cout<<a<<b<<c<<d;
    int c;
    cin>>c;
   int k= sqrt(c);
   int a = (k+10)/2;
   int b= k-a;
   if((a+b)*(a+b)==c && a>=0 && b>=0){
    cout<<a<<" "<<b<<endl;
   }
   else if((a+b)*(a+b)==c && (a>=0 || b>=0)){
    if(a>b){
      cout<<(a+b)<<" "<<0<<endl;
    }else{
      cout<<(b+a)<<" "<<0<<endl;
    }
   }
   else{
    cout<<-1<<endl;
   }
  }
  
}