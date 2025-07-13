#include<bits/stdc++.h>
using namespace std;

class Stack  {
  int* arr;
  int top;
  int size;
  public:
  bool flag;
  Stack(int size){
      arr = new int[size];
      size = size;
      top = -1;
      flag =1;
  }
  void push(int val){
    if(top<size){
       arr[++top] = val;
       flag =0;
       
    }else{
      cout<<"Stack OverFlow"<<endl;
    }
  }
  void pop(){
    if(top == -1){
      flag =0;
      cout<<"Stack UnderFlow"<<endl;
    }
    top--;
  }
  int peak(){
   if(top ==  -1) return -1;
   else{
     return arr[top];
   }
  }
  bool isEmpty(){
    return  top==-1;
  }
   int IsSize(){
    return top+1;
   }

};
int main(){
  Stack S1(5);
  S1.push(2);
  S1.push(2);
  S1.push(5);
  S1.push(5);
  S1.push(5);
  S1.push(5);
 
  
}