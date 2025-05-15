#include<bits/stdc++.h>
using namespace std;

int main(){
  int student,p;
  cin>>student>>p;

  vector<int> shape(p);
  for (int i = 0; i < p; i++)
  {
    cin>>shape[i];
  }
  sort(shape.begin(),shape.end());
  // int dist = shape[student-1]-shape[0];
  // if(dist==1){
  //   cout<<0<<endl;
  // }else{
  //   cout<<abs(dist)<<endl;
  // }
  int diff =0;
  int count=0;
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j< (shape[p-1]-shape[0]); j++)
    {
      if(shape[i+1] -shape[i] == i ){
        diff++;
      }
      else if(diff  == 4)
      {
        count = i;
        break;

      }{
        diff =0;
      }

    }
    if(diff ==4){
      cout<<count<<endl;
    }
  }
  
  
}