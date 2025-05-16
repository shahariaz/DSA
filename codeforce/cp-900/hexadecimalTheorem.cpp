#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> arr;
  arr.push_back(0);
  arr.push_back(1);
 int i =2;
  while (1)
  { 
      int  a = arr[i-2]+arr[i-1];
      if(a<=n){
        arr.push_back(a);
        i++;
      }else{
        break;
      }
  }
  // for(auto u:arr) cout<<u<<" "<<endl;
 
  if(n==0){
    cout<<0<<" "<<0<<" "<<0<<endl;
  }
 else if(n==1){
    cout<<0<<" "<<0<<" "<<1<<endl;
  }
  else if(n==2){
    cout<<0<<" "<<1<<" "<<1<<endl;
  }else{
    for (int i = 0; i < arr.size(); i++)
  {
    if(arr[i]==n){
      cout<<arr[i-1]<<" "<<arr[i-3]<<" "<<arr[i-4]<<endl;
      break;
    }
  }
  }
  
  
  
  
}