#include<bits/stdc++.h>
using namespace  std;
class  Student {
  private:
  string name;
  int age,roll_number;
  string grade;
  //We can access private attribute by setter and getter method
  public:
  void setname(string s){
    name =  s;
  }
  string getname(){
    return name;
  }
};

int main(){

  Student s1;
  s1.setname("shahariaz");
  cout<<s1.getname()<<endl;
   

}