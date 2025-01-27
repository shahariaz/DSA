#include<iostream>
#include<vector>

using namespace std;


void sortColor(vector<int>& nums){
  
   int start = 0;
    int end = nums.size() - 1;
    int i = 0;
    while(i <= end){
        if(nums[i] == 0){
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i] == 2){
            swap(nums[i],nums[end]);
            end--;
        }
        else{
            i++;
        }
    }
    
}


int main(){

   vector<int> arr= {0,0,1,2,2,1};

   
   sortColor(arr);



}