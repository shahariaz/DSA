#include<bits/stdc++.h>
using namespace std;


int main(){
  int a;
  cin>> a;
  int arr[a][a];
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j <a ; j++)
    {
      cin>>arr[i][j];
    }
    
  }
  int count =0;
  int colum[a];
  int row[a];
  int r=0;
  int c=0;
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j <a ; j++)
    {
     r += arr[i][j];
     c+=arr[j][i];
    }
    row[i]=r;
    colum[i]=c;
    r=0;
    c=0;
    
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    { 
      
      if(colum[i]>row[j]){
        count++;
      }
    }
    
  }
   cout<<count<<endl;
}