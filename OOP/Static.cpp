#include<bits/stdc++.h>
using namespace std;


class Customer{
  static int total_account;
  string name;
  int account_number,balance;
  public:
  Customer(string name,int account_number,int balance){
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    total_account++;
  }
  void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_account<<" "<<endl;
  }
  
};
int Customer::total_account =0;
int main(){
   Customer Shaharaiz("Shahariaz",1222,333);
   Customer Rohit("Rohit",2132,32);
   Customer Sojib(Shaharaiz);
   Sojib.display();
} 