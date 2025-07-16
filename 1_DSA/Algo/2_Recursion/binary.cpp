#include<bits/stdc++.h>
using namespace std;


bool BinarySearch(int arr[],int start,int end,int x){
   if(start>end) return false;
  int mid = start + (end-start)/2;
  if(arr[mid] == x) return true;
 
  if(arr[mid]>x){
   return  BinarySearch(arr,start,mid-1,x);
  }else{
     return BinarySearch(arr,mid+1,end,x);
  }
}

int main(){
  int arr[5] = {1,2,4,5,6};
  cout<<BinarySearch(arr,0,4,5);
}