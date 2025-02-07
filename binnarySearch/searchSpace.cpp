#include<bits/stdc++.h>
using namespace std;


int findQuotient(int devider,int dividend){
  int start = 0;
  int end  = dividend;
  int quotient = -1;
  while(start <=end){
    int mid = start + (end-start)/2;
    if(mid*devider == dividend){
      return mid;
    }
    else if(mid*devider < dividend){
      quotient = mid;
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  }
  return quotient;

}







int main(){
  int devider;
  int dividend;
  cout<<"Enter the devider: ";
  cin>>devider;
  cout<<"Enter the dividend: ";
  cin>>dividend;
  int quotient = findQuotient(devider, dividend);
  cout<<quotient<<endl;
}