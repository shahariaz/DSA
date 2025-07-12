#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int x = a+b;
   
    if(abs(x-c) % 2 == 0  || abs(x-c) == 0){
      cout<<"Second"<<endl;

    }else{
      cout<<"First"<<endl;
    }

  }
  
}