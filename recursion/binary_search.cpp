#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int mx = 2e5 + 123;
int arr[mx];
ll sum[mx];

int binarySearch(int s,int e,int x){
  if(s > e) return -1; // Base case: element not found
  int mid = s + (e - s) / 2; // To avoid overflow
  if(arr[mid] == x) return mid; // Element found
  else if(arr[mid] < x) return binarySearch(mid + 1, e, x); // Search in right half
  else return binarySearch(s, mid - 1, x); // Search in left half     
}

int main(){
  int n,x;
  cin>>n>>x;
  for(int i=1; i<=n; i++){
      cin>>arr[i];
  }

}