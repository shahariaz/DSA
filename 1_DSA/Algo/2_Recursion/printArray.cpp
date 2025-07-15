#include<bits/stdc++.h>
using namespace std;


void printArray(vector<int> &arr,int s){
  if(s== 0) return ;
  printArray(arr,s-1);
  cout<<arr[s-1]<<" ";
}

int main(){
  vector<int>arr = {1,2,3,4,5};
  printArray(arr,5);
}