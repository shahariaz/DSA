#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin >>t;
  while (t--)
  {
    int n,o;
    cin>>n>>o;
    vector<int> arr(n,0);
    for(int i = 0; i < o; i++){
      arr[i] = 1;
    }
     for( auto u:arr) {
      cout << u;
     }
  cout<<endl;
    }
  
}