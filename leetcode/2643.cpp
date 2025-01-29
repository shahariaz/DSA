#include<bits/stdc++.h>
using namespace std;




int main(){


    vector<vector<int>> arr = {{1,2,3,1},{1,1,1,4},{1,1,9,5}}; 
    int max = INTMAX_MIN;
    int row = 0;
    int one = 0;
    vector<int> res;
    int n = arr.size();
    int m = arr[0].size();
   for(int i = 0; i < n;i++){
         for(int j = 0; j < m;j++){
            if(arr[i][j] == 1){
                one++;
            }
              cout<<arr[i][j]<<" ";
         }
         if(one >max){
             row = i;
             max = one;
         }
            one = 0;
         cout<<endl;
   }
   res.push_back(row);
   res.push_back(max);

    cout<<max<<endl;
    
     return 0;
    


}