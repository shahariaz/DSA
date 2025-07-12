#include<bits/stdc++.h>
using namespace std;

int  main(){
  int t;
  cin>>t;
  while (t--)
  {
    int  gA,fB,gC,fD;
    cin>>gA>>fB>>gC>>fD;
 
    int  minA=  min(gA,gC);
    int minB = min(fB,fD);
    if(minA>=minB){
      cout<<"Gellyfish\n";
    }else{
      cout<<"Flower\n";
    }
    
  }
  
}