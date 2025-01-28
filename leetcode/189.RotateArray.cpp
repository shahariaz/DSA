#include<iostream>

using namespace std;

void Rotate(int arr[],int n,int k){
    
    for(int i =0;i < k; i++){
        int temp = arr[n-1];
        for(int j=n -1; j>=0; j--){
           arr[j] =arr[j -1];
            
        }
        arr[0]= temp;
    }
    for(int i =0; i< n;i++){
        cout<<arr[i] <<" ";
    }

}

int main(){


  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  Rotate(arr,n,k);
}