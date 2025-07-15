#include<bits/stdc++.h>
using namespace std;


int sumA(vector<int> &arr,int s){
  if(s== -1) return 0;
 return arr[s] + sumA(arr,s-1);
 
}

int main(){
  vector<int>arr = {3,4,5,8,2};
  cout<<sumA(arr,5);
}