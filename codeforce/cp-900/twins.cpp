#include<bits/stdc++.h>
using namespace  std;


int main(){

  int n;
  cin>>n;
 vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  sort(arr.rbegin(),arr.rend());
  long long total=0;
  for(auto u:arr){
   
    total+=u;
  }
  int half = total/2;
  if(total%2==0){
    total++;
  }
 

  int count  =0;
  for (int i = 0; i < n; i++)
  { 
   
    if(total>half){
      // cout<<total<<endl;
      // cout<<half<<endl;
      // cout<<count<<endl;
      total-=arr[i];
      count++;
     
    }
  }
  

  cout<<count<<endl;


}