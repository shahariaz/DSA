#include<bits/stdc++.h>
using namespace std;


int main(){
  string a;
  cin >>a;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if(a[i]=='A'||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U' ||  a[i]=='Y' || a[i]=='a'||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||  a[i]=='y'){
      
      

    }else if (a[i]<97)
    {
      a[i]=a[i]+32;
      cout<<'.'<<a[i];
    }else{
      cout<<'.'<<a[i];
    }
  }
 
  
}