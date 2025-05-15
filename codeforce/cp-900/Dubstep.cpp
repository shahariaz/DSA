#include<bits/stdc++.h>
using namespace std;


int main(){
  string s;
  cin >>s;
  int n = s.size();
  int arr[n];
  for(int i=0;i<n;i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
      i=i+2;
      if(i!=0 && i!=n-1){
        cout<<" ";
      }
    }else{
      cout<<s[i];
    }
  }
  
  
}
