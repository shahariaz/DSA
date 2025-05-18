#include<bits/stdc++.h>
using  namespace std;

int main(){
  int n,h,m;
  cin>>n>>h>>m;
  vector<int>arr(n,h);
   
  while (m--)
  {
    int l,r,x;
    cin>>l>>r>>x;
    for (int i = 1; i <= n; i++)
    {
      if (i>=l && i<=r)
      {
        int k = arr[i-1];
        k = min(k,x);
        arr[i-1]=k;
      }
      
    }
    
  }
  int long long benfit=0;
  for(auto u:arr) benfit+=u*u;
  std::cout << benfit << std::endl;
  
}