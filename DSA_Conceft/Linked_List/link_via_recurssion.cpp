#include<bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node(int val) {
    data = val;
    next = NULL;
  }
};

class List {
  Node* head;
  Node* tail;
public:
  List() {
    head = tail = NULL;
  }

  void push_front(int val) {
    if (head == NULL) {
      head = tail = new Node(val);
    } else {
      Node* temp = new Node(val);
      temp->next = head;
      head = temp;
    }
  }

  void push_back(int val) {
    Node* temp = new Node(val);
    if (head == NULL) {
      head = tail = temp;
    } else {
      tail->next = temp;
      tail = temp;
    }
  }

  void insert(int val, int pos) {
    if (pos < 0) return;
    if (pos == 0) {
      push_front(val);
      return;
    }
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
      if (temp == NULL) return;
      temp = temp->next;
    }
    if (temp == NULL) return;
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    if (newNode->next == NULL) tail = newNode;
  }
  void pop_front(){
    if(head == NULL) return ;
    Node* temp = head;
    head = temp->next;
    delete temp;
  }
  void pop_back(){
    if(head == NULL) return;
    if(head->next == NULL){
      delete head;
      head = NULL;
    }else{
      Node* curr = head;
      Node* prev = NULL;
      while (curr->next !=NULL )
      {
        prev = curr;
        curr = curr->next; 
      }
      delete curr;
      prev->next = NULL;
    }
  }

  void display() {
    Node* temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  List l;
  l.push_back(10);
  l.push_back(20);
  l.push_front(5);
  l.insert(15, 2);
  l.pop_front();
  l.pop_back();
  l.display();
  return 0;
}
