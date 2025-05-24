#include<bits/stdc++.h>
using namespace std;   
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
  optimize();
  int s,n; cin>>s>>n;
  bool isOk = 0;
  pair<int,int> a[1000];
  for(int i =0;i<n;i++){
    cin>>a[i].first>>a[i].second;
  }
  sort(a,a+n);

  for(int i =0;i<n;i++){
    if(s<=a[i].first){
      isOk =1;
      break;
    }else{
      s+= a[i].second;
    }
  }
  if(isOk ==1){
    cout<<"NO";
  }else{
    cout<<"YES";
  }
}