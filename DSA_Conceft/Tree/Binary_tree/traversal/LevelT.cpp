#include<bits/stdc++.h>
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




int main(){
  int x,first,second;
  cin>>x;
  Node* root = new Node(x);
  queue<Node*> q;
  q.push(root);
  while (!q.empty())
  {
    Node* temp = q.front();
    q.pop();
    //left
    cout<<"Enter the value of "<<temp->val<<" for left : "<<endl;
    cin>>first;
    if(first !=-1){
      temp->left = new Node(first);
      q.push(temp->left);
    }
    //Right
    cout<<"Enter the value of "<<temp->val<<" for Right : "<<endl;
    cin>>second;
    if(second != -1){
      temp->right = new Node(second);
      q.push(temp->right);
    }
  }
  
}