#include<iostream>

using namespace std;

void Rotate(int arr[],int n,int k){
    int temp = arr[n-1];
    for(int i =0;i < k; i++){
        for(int j=n; j>0; j--){
            swap(arr[j-1],arr[j]);
            
        }
        arr[0]= temp;
    }
    for(int i =0; i< n;i++){
        cout<<i<<" ";
    }

}

int main(){


  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  Rotate(arr,n,k);
}