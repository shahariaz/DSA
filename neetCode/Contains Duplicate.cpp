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
    unordered_set<int> seen;
    for(int i = 0; i < n; i++){
        if(seen.find(arr[i]) != seen.end()){
            cout << "true" << endl; // Duplicate found
            return 0;
        }
        seen.insert(arr[i]);
    }
    cout << "false" << endl; // No duplicates found
    return 0;
}