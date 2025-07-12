#include<bits/stdc++.h>
using namespace   std;

class Bank{
  string name;
  int * data;

  Bank(){
    data = new  int;
    *data = 4;
  }
  ~ Bank (){
    delete data;
  }
};
int  main(){}