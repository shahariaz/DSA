#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left = right = NULL;
  }
};

int main(){
  queue<Node*> q;
  int x;
  cout<<"Enter the Root Node Value: ";
  cin>>x;
  //creating root node
  Node* root = new Node(x);
  //Created root node
  //pushing node to stack
  q.push(root);
  //Running loop unitil queue empty
  while (!q.empty()){
    Node* temp = q.front();
    q.pop();
    //Left Child
    int left;
    cout<<"Enter the value for left "<< temp->data <<" : ";
    cin>>left;
    if(left != -1){ 
    temp->left = new Node(left);
    q.push(temp->left);
    }
    //Right Child
    int right;
    cout<<"Enter the value for right "<< temp->data <<" : ";
    cin>>right;
    if(right != -1){ 
    temp->right = new Node(right);
    q.push(temp->right);
    }
  }
  {
    /* code */
  }
  
}