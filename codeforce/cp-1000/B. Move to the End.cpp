#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> cp(n);
    for( auto &u:arr) cin>>u;
    sort(arr.rbegin(),arr.rend());
    long long sum =arr[0];
    for(int i =0;i<n-1;i++ ){
      if(i==0){
        cout<<arr[i]<<" ";
      }else{
        cout<<(sum+=arr[i+1])<<" ";
      }
    }
    cout<<endl;
  }
  
}