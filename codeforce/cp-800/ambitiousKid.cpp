#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) {
    int a;
    cin>>a;
    arr[i]=abs(a);
  }
  sort(arr,arr+n);
  cout<<arr[0]<<endl;
  
}