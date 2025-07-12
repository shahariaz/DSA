#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int mx = 2e5+123;
int arr[mx];
ll sum [mx];

int main(){
    int n,x;
    cin>>n>>x;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        sum[i]= sum[i-1] + arr[i];
    }
    ll ans = 0;
    map<ll,int> cnt;
    cnt[0]=1;
    for(int i =1;i<=n;i++){
      ll sumMinus = sum[i] -x;
      ans+=cnt[sumMinus];
      cnt[sum[i]]++;
    }
    cout<<ans<<"\n";

  return 0;
}