#include<bits/stdc++.h>
using namespace std;


class Student{
  public:
  string name;
  int age;
};

int main(){
   Student *S1 = new Student;

   (*S1).name = "shahariaz";
   S1 -> age = 10; 

}