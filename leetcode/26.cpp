#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(int nums[], int n){
  int i = 0;
  int j = 0;
  while(j < n){
    if(nums[i] == nums[j]){
      j++;
    }else{
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;
}


int main(){
  int nums[] = {0,0,1,1,1,2,2,3,3,4};
  cout << removeDuplicates(nums,n);
  cout << removeDuplicates(&nums,n);



}