#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &p,const pair<int,int> &q){
  if(p.first>q.first) return 1;
  else if(p.first == q.first && p.second<q.second) return 1;
  return 0;

}

int main(){

  int n,k;
  cin>>n>>k;
  vector<pair<int,int>> rank(n);
  for(int i=0;i<n;i++){
    cin>>rank[i].first>>rank[i].second;
  }
  sort(rank.begin(),rank.end(),cmp);
  // int ans =0;
  // for(auto u:rank){
  //   if(u==rank[k-1]) ans++;
  // }
  // cout<<ans<<endl;
  for(auto u:rank) cout<<u.first<<" "<<u.second<<endl;
}