#include<iostream>

using namespace std;
int sort (int arr[],int n){
   for( int i=0; i<n; i++){
    for (int j = i; j < n; j++){
      if (arr[j] < arr[i]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
   }
   
   for(int i=0; i<n; i++){
      cout << arr[i] << " ";
    }
}
int main (){
 
  int arr[]= {0,0,1,0,1,1,1,0,0,1};
  int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr,n);

}