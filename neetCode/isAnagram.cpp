#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



int main(){
   int n;
   cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
     }
      unordered_map<int,int> ans;
      for(auto u:arr){
        ans[u]++;
      }
      for(auto u:ans){
        cout<< u.first << " " << u.second << endl;
      }
}