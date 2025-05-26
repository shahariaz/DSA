#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  set<int> st;
  for(int i =0;i<n;i++){
    int a;
    cin>>a;
    st.insert(a);

  }
  if(st.size()<2){
   cout<<"NO";
  }else cout<<(*++st.begin());
}