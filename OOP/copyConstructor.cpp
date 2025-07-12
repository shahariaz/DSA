#include<bits/stdc++.h>
using namespace std;
class  Bank {
  string name;
  string address;
  int age;
  int balance;
  int pin;
  bool verified;
  public:
  Bank(string name,int age){
    this -> name = name;
    this -> age = age;
  }
  //Copy consturctor
  Bank(const Bank &a){
    name = a.name;
    age = a.age;
  }
  void Display(){
    cout<<name<<" "<<age<<endl;
  }
};
int main(){
   
    Bank Acc_1 =  Bank ("Shahariaz",25);
    Bank Acc_2 = Bank(Acc_1);
    Acc_2.Display();

}