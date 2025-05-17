#include<bits/stdc++.h>
using  namespace std;

int main(){
  int m,n;
  cin>>m>>n;
  int sqr= m*n;
  if ((m*n)%2!=0)
  {
    cout<<((sqr-1)/2)<<endl;
  }else{
    std::cout << sqr/2 << std::endl;
  }
  
}
