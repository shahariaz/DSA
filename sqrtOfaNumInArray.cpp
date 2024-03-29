#include<iostream>
using namespace std;

int funcSqrt(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==mid){
            return mid;
        }
        else if(arr[mid]<mid){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
     int arr[500];
     int n;
     cout<< "Enter the number of elements in array " <<endl;
     cin>> n;
     cout<< "Enter the elements in array " <<endl;
     for(int i=0;i<n;i++)
     cin>> arr[i];
     int sqrt;
     cout<<" Enter the SQRT of the Number: " <<endl;
     cin>> sqrt;
    int result = funcSqrt(arr,n);
    cout<<result<<endl;
    return 0;
}