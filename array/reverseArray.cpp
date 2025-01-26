#include<iostream>
using namespace std;


int reverse(int arr[],int n){
  int start = 0;
  int end = n -1;
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverse(arr,n);
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }

}