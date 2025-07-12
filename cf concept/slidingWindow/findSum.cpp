//You are giving an n size array...likr [2,4,5,6,7,4]; and a k. where k is subarray size. You have to find the sum of subarray and print the max one... 

//key point to focus is if we do it in bruteforce style it will take O(n*2);
//By sliding window we can sovle it in O(n) time...




#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
 for(auto &v:arr) cin>>v;
 int sum=0;
 int maxi=INT_MIN;
 for(int i=0;i<k;i++){
  sum+=arr[i];
 } 
 maxi = max(maxi,sum);
 for(int i =k;i<n;i++){
  sum+=arr[i];
  sum-=arr[i-k];
  maxi = max(maxi,sum);
 }
 cout<<maxi;
}