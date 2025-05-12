#include<bits/stdc++.h>
using namespace std;



int  main(){
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    long long sum =0;
    cin>> n;
    int arr[n];
     for(int  i =0;i<n; i++){
      cin >> arr[i];
      sum += arr[i];
      
     }
     
    long long  a = round(sqrt(sum * 1.0));
    if(a * a == sum){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

  }
  

  return 0;
}