#include<bits/stdc++.h>
using namespace std;


int main(){


  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int j =0;
    for (int i = 0; i < n; i++)
    {
      if(a[i]==k){
       j=1;
      }
    }
  if(j==1){
    cout<<"YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }
    

  }
}