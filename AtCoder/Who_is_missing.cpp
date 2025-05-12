#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin >> n;
  int cards[n*4-1];

  for(int i = 0; i < n*4-1; i++){
    cin >> cards[i];
  }
  int frq[n+1];
  for(int i = 0; i < n+1; i++){
    frq[i] = 0;
  }
  for(int i = 0; i< 4* n-1; i++){
    frq[cards[i]]++;
  }
  for (int i = 0; i < n+1; i++)
  {
    if (frq[i] % 4 != 0)
    {
      cout << i << endl;
      break;
    }
  }
  

}