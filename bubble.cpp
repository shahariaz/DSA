#include<iostream>
using namespace std;


int main(){
 int arr[5]={45,3,54,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);

for(int i = n-2; i>=0;i--){
    for(int j = 0; j<=i; j++){
        if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
        }
    }
}

 for(int i=0;i<n;i++)
 cout<<arr[i]<<endl;
 return 0;

    return 0;
}