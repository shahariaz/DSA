#include<bits/stdc++.h>
using namespace std;


int main(){
  int s,d;
  
  cin >> s;
  int arr[s];
  for(int i = 0; i < s; i++){
    cin >> arr[i];
  }
   sort(arr, arr + s);

  cin >> d;
  while (d--)
  {
    int p;
    cin >> p;
    auto it = upper_bound(arr,arr+s,p);
    cout<< it - arr << endl;
    
  }
  
}