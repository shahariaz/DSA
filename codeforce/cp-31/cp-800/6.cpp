#include<bits/stdc++.h>
using namespace std;




int main(){
   int t;
   cin>>t;
   while(t--){

    int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
   cin>>arr[i];
  }
 for(int i =0;i<n;i++){
  for(int i=0;i<n-2;i++){
    if(arr[i]+arr[i+1]>arr[i+1]+arr[i+2] || arr[i+1]==arr[i+2]){
       swap(arr[i],arr[i+1]);
    }
    if(arr[i]+arr[i+1]<arr[i+1]+arr[i+2] || arr[i]==arr[i+1]){
       swap(arr[i+1],arr[i+2]);
    }

  }
 }
  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<endl;
  //  }
   int k =1;
 for(int i=0;i<n;i++){
  for(int i=0;i<n-2;i++){
    if((arr[i]+arr[i+1])!=(arr[i+1]+arr[i+2])){
      k=-1;
    }
   }
 }

   if(k== -1){
    cout<<"NO"<<endl;
    
   }else{
    cout<<"YES"<<endl;
   }
   

   
   }
}