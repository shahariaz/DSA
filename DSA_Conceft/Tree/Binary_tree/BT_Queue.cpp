#include<iostream>
#include<queue>
using namespace  std;


class Node{
  public:
  int data;
  Node* left, *right ;
  Node(int value){
     data = value;
     left = right = NULL;
  }
};

int main(){
  int x;
  int first,second;
  cout<<"Enter the root Element: ";
  cin>>x;
  //Inatialize Root Node
  queue<Node*>q;
  Node *root = new Node(x);
  //Push Root Node to Queue
  q.push(root);
  //Bulding Binary Tree
  while (!q.empty())
  {
     Node*temp = q.front();
     q.pop();
     cout<<"Enter the left child of  "<<temp->data<< " : ";
     //Left Node
     cin>>first;
     if(first!=-1){
      temp->left = new Node(first);
      q.push(temp->left);
     }
     //Right Node
      cout<<"Enter the Right child of "<<temp->data<< " : ";
     cin>>second;
     if(second != -1){
      temp->right = new Node(second);
      q.push(temp->right);
     }
  }
  

}