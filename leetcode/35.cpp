#include<bits/stdc++.h>

using namespace std;


 int binarySearch(int arr[], int low, int high, int target){
     while(low <= high){
         int mid = low + (high - low) / 2;
         if(arr[mid] == target){
             return mid;
         }
         else if(arr[mid] < target){
             low = mid + 1;
         }
         else{
             high = mid - 1;
         }
     }
     return -1;
 }

int main(){
    int arr[4] = {1,3,5,6};
    int target = 5;
    int n = 4;
    int index = binarySearch(arr, 0, n - 1, target);
    if(index == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<index<<endl;
    }
    int a = 3;
    int b = a/2;
    cout<<b<<endl;
    return 0;

}