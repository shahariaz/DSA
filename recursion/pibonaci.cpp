#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int  mx = 2e5+123;
int arr[mx];
ll sum [mx];


int fibonacci(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  if(sum[n] != 0) return sum[n];
 sum[n] = fibonacci(n-1) + fibonacci(n-2);
  
   return sum[n];
}

int main(){
    int n;
    cin>>n;
    
    cout << fibonacci(n) << endl;

  return 0;
}