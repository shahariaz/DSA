#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr(n);
    for(int i =1;i<=n;i++) arr[i-1]=i;
    reverse(s.begin(),s.end());
    vector<int>a(n);
    for(int i=0;i<s.size();i++){
      if(s[i]=='<'){
        a[i]= *min_element(arr.begin(),arr.end());
        arr.erase(remove(arr.begin(),arr.end(),a[i]),arr.end());
      }else{
        a[i]= *max_element(arr.begin(),arr.end());
        arr.erase(remove(arr.begin(),arr.end(),a[i]),arr.end());
      }
    }
    a[n-1]= arr[0];
    reverse(a.begin(),a.end());
    for(auto u:a) cout<<u<<" ";
    cout<<endl;
  }
  
}