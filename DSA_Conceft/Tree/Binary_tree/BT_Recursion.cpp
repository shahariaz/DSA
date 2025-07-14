#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* left,*right;
  Node(int val){
    val = val;
    left = right = NULL;
  }

};
Node * BinaryTree(){
  int x;
  cin>>x;
  if(x == -1) return NULL;
  Node* temp = new Node(x);
  //Left side creat
  cout<<"Enter the left child of  "<<x<<" :";
  temp->left = BinaryTree();
  //Right side create
  cout<<"Enter the left child of  "<<x<<" :";
  temp->right = BinaryTree();
  return temp;
  
}
int main(){
  cout<<"Enter the root Node : ";
  Node* root = BinaryTree();
}