#include<bits/stdc++.h>

using namespace std;
int partition(int arr[],int start,int end){
  int pos = start;
  
  for(int i =start;i<=end;i++){
    if(arr[i]<=arr[end]){
      swap(arr[i],arr[pos]);
      pos++;
    }
  }
  return pos-1;
  
}
void quick(int arr[],int start,int end){
  if(start>= end) return;
  //left
  int pivot = partition(arr,start,end);
  quick(arr,start,pivot-1);
  quick(arr,pivot+1,end);
}
int main(){
  int arr[] = {10,3,4,1,5,11,6,3,2,1};
  quick(arr,0,9);
for(int i   =0;i<10;i++){
  cout<<arr[i]<<"  ";
}

}