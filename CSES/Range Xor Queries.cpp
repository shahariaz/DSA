#include<bits/stdc++.h>
using namespace std;


int main(){
  int n,q;
  cin>>n>>q;
  vector<int> arr(n);
  for(int i=1;i<=n;i++){
    cin>>arr[i];
  }
  vector<int> prefix(n,0);
  
  for(int i=1;i<=n;i++){
    prefix[i] = prefix[i-1] ^ arr[i];
  }
  while (q--)
  {
    int l,r;
    cin>>l>>r;
    cout<<(prefix[r] ^ prefix[l-1])<<endl;
  }
  
}