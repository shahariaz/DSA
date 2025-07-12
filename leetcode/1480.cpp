#include<bits/stdc++.h>
using namespace std;






  vector<int> runningSum(vector<int>& nums) {
        int size =  nums.size();
        vector<int> prefix(size,0);
        for(int i=0;i<size;i++){
          cout<<nums[i]<<" "<< prefix[i]<<" "<<endl;
            prefix[i] = prefix[i] + nums[i];
            cout<<prefix[i]<<" ";
        }

        return prefix;
    }


int main (){

    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = runningSum(nums);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
 

}