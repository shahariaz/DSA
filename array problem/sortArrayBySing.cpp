#include<iostream>

using namespace std;





void sort(int arr[], int n){
  int start = 0;
  int end = n - 1;
  while(start < end){
    if(arr[start]<0){
      start++;
    }
    else if(arr[end]>0){
      end--;
    }
    else{
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
     
  }
  
    for(int i = 0; i < n; i++){
      cout << arr[i] << " ";

      }

}
int main(){
  int arr[] = {23,-7,12,-10,-11,40,60};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr,n);

}