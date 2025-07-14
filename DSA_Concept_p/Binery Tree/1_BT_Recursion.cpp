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
Node* BT(){
    int x;
    cout<<"Enter the value of root : ";
    cin>>x;
    if(x == -1) return NULL;
    Node* temp = new Node(x);
     cout<<"Enter the left child of  "<<x<<" :";
    temp->left = BT();
     cout<<"Enter the right child of  "<<x<<" :";
    temp->right = BT();
    return temp;
}

int main(){
   cout<<"Enter the root Node : ";
  Node* root = BT();
}