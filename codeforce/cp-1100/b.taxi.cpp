#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  vector<int>v(5,0);
  for(int i =0;i<n;i++){
   cin>>arr[i];
   v[arr[i]]++;
  }
  int count= v[5];
  for(int i=1;i<4;i++){
    count+= v[i]/4;
    v[i]=
  }
 
}