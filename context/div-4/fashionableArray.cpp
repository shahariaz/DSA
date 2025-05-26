#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &u:arr) cin>>u;
    int count =0;
    int lcount=0;
    int rcount=0;
     int i =0;
     int j= n-1;
     sort(arr.begin(),arr.end());
     while (i<j)
     {
      if((arr[i]+arr[j])%2 ==0){ 
        break;
      }else{
        count++;
        i++;
        j--;
      }
     }
     i=0;
     j=n-1;
     while (i<j)
     {
      if((arr[i]+arr[j])%2 ==0){
        break;
      }else{
        lcount++;
        i++;
        
      }
     }
     i=0;
     j=n-1;
     while (i<j)
     {
      if((arr[i]+arr[j])%2 ==0){
        break;
      }else{
        rcount++;
        j--;
        
      }
     }
     
   int m = min(count,lcount);
    m = min(m,rcount);
    cout<<m<<endl;
     
  }
  
}