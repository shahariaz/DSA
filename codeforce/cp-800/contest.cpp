#include<bits/stdc++.h>
using namespace  std;


int main(){
  int t;
  cin >>t;
  while (t--)
  {  
    int n;
    cin >>n;
    int  arr[n];
    int copy[n];
    for (int i = 0; i <n; i++)
    {
     cin>>arr[i]; 
     copy[i]=arr[i];
    }
    
    sort(copy,copy+n);

    if( copy[0]==copy[n-1] ){
     cout<<"YES"<<endl;
    }else{
      int  count = 0;
      for (int i = 0; i < n-1; i++)
      {
        if(arr[i]==0 && arr[i+1]==0 ){
          count++;
        }
      }
      if(count>=1){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
      
    }
    
    
  }
  
}