#include<bits/stdc++.h>

using namespace std;

class Person{
  public:
  int age;
  string name;

  bool operator<(const Person &other) const {
    return age>other.age;
  }
};

int main(){
  set<int> s;
  set<int,greater<int>> s2;
  s.insert(10);
  s.insert(12);
  if(s.find(12) != s.end()) cout<< true;
  if(s.count(12)) cout<<"Present";

  for(auto it = s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
  s.erase(10);
  set<Person> P;
  Person p1,p2,p3;
  p1.age = 10;p1.name ="hello";
  p2.age = 17;p3.name ="World";
  p3.age = 13;p2.name ="hello";
}