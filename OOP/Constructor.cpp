#include<bits/stdc++.h>
using namespace std;
 
 
class Bank{
 public:
 string name;
 int age;
 int balance;
 int pin;
 int *memory;
  Bank(){
    memory = new int[100];
  cout<<"Defult construtor  called"<<endl;
 }
 //Constructor Overloading 
 //When constructor have perameter we called it perameterized constructor
 Bank(string name,int balance){
   this-> name = name;
   this-> balance = balance;
 }
 Bank( string name,int age,int balance){
  this -> name = name;
  this -> age = age;
  this -> balance = balance;
 }
 //inline Constructor
 inline Bank (string name,int age,int balance,int pin): name(name),age(age),balance(balance),pin(pin){}

};