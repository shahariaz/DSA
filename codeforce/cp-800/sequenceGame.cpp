#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>v;
    v.push_back(arr[0]);
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        v.push_back(arr[i+1]);
        v.push_back(arr[i+1]);

      }else{
        v.push_back(arr[i+1]);
      }
    }
    cout<<v.size()<<endl;
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
  }
  
}