#include<iostream>
typedef long long ll;
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    ll n;
   
    cin>>n;
    while (n%2==0)
    {
      n=n/2;
    }
    if(n<=1){
      cout<<"NO\n";
    
    }else{
      cout<<"YES\n";
    }
    
  }
  
}