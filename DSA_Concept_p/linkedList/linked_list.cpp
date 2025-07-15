#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this->data = data;
    next = NULL;
  }
};
class List{
  Node* head;
  Node* tail;
  public:
  List(){
    head = tail = NULL;
  }
  void push_front(int val){
    if(head == NULL){
      head = tail = new Node(val);
    }else{
      Node* temp = new Node(val);
      temp->next = head;
      head = temp;
    }
  };
  void push_back(int val){
    if(head == NULL){
      head = tail = new Node(val);
    }else{
      tail->next = new Node(val);
      tail = tail->next;
    }
  };
  void insetAt(int val,int pos){
    if(head == NULL) return;
    if(pos<0) return;
    else{
      Node* temp = head;
       Node* prev;
      while (pos--)
      {
       prev = temp;
        temp = temp->next;
      }
      if (temp == NULL) return;
      prev->next = new Node(val);
      prev->next->next = temp;
      
    }
  };
  void pop_front(){};
  void pop_back(){};
  void display(){};
};

int main(){


}