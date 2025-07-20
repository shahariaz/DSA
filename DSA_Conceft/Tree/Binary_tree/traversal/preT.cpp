#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* left,*right;
  Node(int val){
    this->val = val;
    left = right = NULL;
  }

};
void PreOrder(Node* root){
  if(root ==NULL) return;
  //Node
  cout<<root->val<<" ";
  //left
  PreOrder(root->left);
  PreOrder(root->right);
}
void InOrder(Node* root){
  if(root == NULL) return;
  //left
  InOrder(root->left);
  //node
  cout<<root->val<<" ";
  //right
  InOrder(root->right);
}
void PostOrder(Node* root){
  if(root == NULL) return;
  //left
  PostOrder(root->left);
  //Right
  PostOrder(root->right);
  //Node
  cout<<root->val<<" ";
}
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

  cout<<"Pre Order: ";
  PreOrder(root);
  cout<<endl;
  cout<<"In Order: ";
  InOrder(root);
   cout<<endl;
  cout<<"Post Order: ";
  PostOrder(root);
  
}