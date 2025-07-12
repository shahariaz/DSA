#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int mx = 2e5+123;
int arr[mx];
ll sum [mx];

int factorial(int n){
  if(n == 0 || n==1 ) return 1;
  int res =  n * factorial(n - 1);
  return res;
}

int main(){
  int a;
  cin >> a;
  cout << factorial(a) << endl;
  return 0;
}