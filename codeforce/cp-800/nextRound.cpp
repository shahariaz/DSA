#include<bits/stdc++.h>
using namespace std;


int main(){
  int n,s;
  cin>>n>>s;
  vector<int>arr(n);
  for (int i = 0; i < n; i++)
  {
       cin>>arr[i];
  }
  int t=s;
  sort(arr.rbegin(),arr.rend());
  if (arr.back()==0 && arr[0]==0)
  {
    cout<<0;
   
  }else{
   
    int  k=0;
    for (int i = 0; i < n; i++)
    {
      if(i<s && arr[i]!=0){
        k++;
      }
      if (k>=s)
      {
        int c =arr[s-1];
        if (c==arr[i+1])
        {
          k++;
        }
        
      }
      
    }
    
    cout<<k;
  }
  
 
  
  
}