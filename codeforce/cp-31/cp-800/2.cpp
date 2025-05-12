#include<bits/stdc++.h>
using namespace std;




int main(){
  int t;
  cin >>t;
  while(t--){
    long long n ,x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int min = INT_MAX;
    for(int i = 1; i<n +1; i++){
      if(i == a[i-1]){
        min = i;
      }
    }
    
  }
}