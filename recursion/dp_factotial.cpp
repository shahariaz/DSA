#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
const int mx = 2e5+123;
int arr[mx];
ll sum [mx];
ll dp [mx];

int factorial(int n){
  if(n == 0 || n==1 ) return 1;
  if(dp[n] != 0) return dp[n];
  ll res =  n * factorial(n - 1);
  dp[n] = res; 
  return dp[n];
}

int main(){
  int a;
  cin >> a;
  cout << factorial(a) << endl;
  return 0;
}