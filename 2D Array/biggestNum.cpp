#include<iostream>
#include<limits.h>

using namespace std;
void findMax(int arr[3][4],int row,int col){
  int max = INT_MIN;
  cout<<max<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]>max){
        max = arr[i][j];
      }
    }
  }
  cout << "The maximum number is: " << max << endl;
}
int main(){
  int row = 3;
  int col = 4;
   int arr [3][4];
  for (int i = 0;i < 3;i++){
    for (int j = 0; j < 4; j++){
      cin >> arr[i][j];
    }
  }
  findMax(arr,row,col);

}