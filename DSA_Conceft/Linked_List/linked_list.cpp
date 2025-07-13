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
  void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head = tail= newNode;
    }else{
      newNode->next =head;
      head = newNode;
    }
  }
  void push_back(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
      head = tail = newNode;
    }else{
      tail -> next = newNode;
      tail = newNode;
    }
  }
  void pop_front(){
    if(head == NULL){
      cout<<"LL is empty\n";
      return;
    }else{
      Node* temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
    }
  }
  void printLL(){
    Node* temp = head;
    while (temp != NULL){
      cout<< temp->data<<" ";
      temp = temp->next;
    }
  }
    
};

int  main(){
 List ll;
 ll.push_back(11);
 ll.push_front(5);
 ll.push_front(6);
 
 ll.printLL();
}