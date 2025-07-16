#include<iostream>
using namespace std;

 void merge(int arr[],int start,int mid,int end){
  int left = start;
  int right = end;
  int temp[(right-left+1)];
  int index=0;
  int l=mid+1;
  while (left<=mid && l <=right)
  {
    if(arr[left]<=arr[l]){
      temp[index] = arr[left];
      left++;
      index++;
    }else{
      temp[index] = arr[l];
      index++;
      l++;
    }
  }
  while(left<=mid){
    temp[index] =  arr[left];
    index++;
    left++;
  }
  while(l<=right){
    temp[index] = arr[l];
    l++;
    index++;
  }
  index =0;
  while (start<=end)
  {
    arr[start] = temp [index];
    start++;
    index++;
  }
  
 }

void mergeSort(int arr[],int left,int right){
  if(left == right) return;
  int mid =  left + (right-left)/2;
  // cout<<mid<<endl;

   //left
   mergeSort(arr,left,mid);
   //Right
   mergeSort(arr,mid+1,right);
   //sort and merge
   merge(arr,left,mid,right);


}
int main(){
  int arr [] = {6,3,1,2,8,9,10,7,3,10};
  mergeSort(arr,0,9);
  for(int i =0;i<10;i++){
    cout<<arr[i]<<" ";
  }

}