#include<bits/stdc++.h>
using namespace std;



int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
  int arr[n] ;
  copy(a,a+n,arr);
  sort(arr,arr+n);
   for(int j =0;j<n;j++){
    for(int i=0; i<n-2;i++){
      if(a[i]<a[i+1] &&  a[i+1]>a[i+2]){
        swap(a[i+1],a[i+2]);
      }
     }
   }
  
   
   bool areEqual =equal(a,a+n,arr);
   if(areEqual){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
  }
}