#include<iostream>
using namespace std;

int main(){
    int arr [7]={2,4,6,8,10, 8,5};
    int n =7;
    int left  =  0, right =n-1,ans;
    while(left<=right){
        int mid = left +(right-left)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            ans = mid;
            break;

    }
    else if(arr[mid]<arr[mid+1]){
        left = mid+1;
    }
    else if (arr[mid]>arr[mid+1]){
    
        right = mid-1;
    }



}
  cout<<arr[ans]<<endl;
}