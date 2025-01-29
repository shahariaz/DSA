#include<iostream>
#include<vector>
using namespace std;


void print (int arr[],int size){
    for(int i =0; i< size;i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int arr [5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    vector<int> arrr {1,2,3,4,5};
    int n = arrr.size();
    for(int i=0; i< n; i++){
        int newIndex = (i + 2) % size;
        cout<<newIndex <<" ";
    }
    
    return 0;
 

}