#include<bits/stdc++.h>
using namespace std;

int pow(int base,int p){
  if(p==1) return base;
  return base * pow(base,p-1);
}

int main(){
  cout<<pow(5,3);
}