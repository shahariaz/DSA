#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
  int val;
  Node* next;
  Node(int val){
     val  = val;
     next = NULL;
  }
};

class Stack{
 Node* top;
 int size;
 public:
 Stack(){
  top = NULL;
  size =0;
 }
 void push(int val){
  Node* temp = new Node(val);
  if(temp ==NULL) cout<<"Stack Overflow"; return;
  temp-> next = top;
  top = temp;
  size++;
 }
 void pop(){
  if(top==NULL){
    cout<<"Stack Underflow"<<endl;
    return;
  }
  else{
    Node* temp = top;
    top = top->next ;
    delete temp;
    size--;
  }
 }
 int peak(){
  if(top == NULL){
    cout<<"Stack is Empty"<<endl;
    return;
  }else{
    return top->val;
  }
 }
 bool IsEmpty(){
  if(top == NULL) return true;
  return false;
 }
 int IsSize(){
     if(size == 0 || top== NULL) return -1;
     return size;
  }
 
};
int main(){
  
}