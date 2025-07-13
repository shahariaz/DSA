#include<bits/stdc++.h>
using namespace std;



class Node{
  
  public:
  int data;
  Node* next;
  Node(int val){
    data =  val;
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
  public:
  void push_front(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
      head = tail = newNode;
    }else{
      newNode->next = head;
      head = newNode;
    }
  }
  void push_back(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head = tail = newNode;
    }else{
       Node* temp = tail;
       tail = newNode;
       temp->next = newNode;
    }

  }
  void inset(int val,int pos){
    if(pos<0){
      return;
    }else if(pos == 0){
      push_front( val);
    }else{
      Node* temp = head;
    }
  }
  void display(){
    Node* temp = head;
    if(head == NULL){
      return;
    }else{
      while (temp != NULL)
      {
        cout<<temp->data<<" ";
        temp = temp->next;
      }
      
    }
  }


};

int main(){
  List ll;
  ll.push_back(11);
  ll.push_back(13);
  ll.push_front(5);
  ll.push_front(5);
  ll.push_front(4);
  ll.push_front(3);
  ll.display();
}