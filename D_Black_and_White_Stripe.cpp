#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> pre(n+1,0);
     int i =1;
     int count =0;
    for(auto u:s){
      if(u== 'W'){
        count ++;
      }
      pre[i] = count;
      i++;
    }
    int mini =INT_MAX;
    for(int i =0;i<=n-k;i++){
        int count =pre[i+k] - pre[i];
        mini = min(count,mini);
    }
    cout<<mini<<endl;
  }
  
}