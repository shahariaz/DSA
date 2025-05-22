#include<bits/stdc++.h>
using namespace  std;


int main(){
  int n,s;
  cin>>n>>s;
  int arr[n];
  for(auto &u:arr) cin>>u;
  sort(arr,arr+n);
  int a = arr[0];
  if(arr[0]==arr[n-1]){
    cout<<0;
  }
  else{
    long long sum=0;
  bool isOk=0;
  for(int i =0; i<n;i++){
    if((arr[i]-arr[0])%s!=0){
      isOk =1;
      break;
    }
    if(i>0){
      sum+=arr[i];
    }
  }
  long long ans = (sum-(a*(n-1)))/s;
  if(isOk==0 ){
    cout<<ans;
  }else{
    cout<<-1;
  }
  }
  
}