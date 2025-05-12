#include<bits/stdc++.h>
using namespace std;



int main(){
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin>>n;
    int digit[n];
    for(int i = 0; i < n; i++){
      cin >> digit[i];
    }
    int min =  INT_MAX;
    for(int i = 0; i < n; i++){
      if (digit[i] < min)
      {
        min = digit[i];
      }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
      if (digit[i] == min && count == 0)
      {
        digit[i] = min + 1;
        count++;
      }
    }
    
    
    long long product =1;
    for (int i = 0; i < n; i++)
    {
      product *= digit[i];
    }
    cout << product << endl;
  }
  
}