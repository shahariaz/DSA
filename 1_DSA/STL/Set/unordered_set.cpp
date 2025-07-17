#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;



int main(){
  unordered_set<int> s;

  s.insert(10);
  s.insert(12);
  s.insert(11);
  s.insert(10);
  for(auto it = s.begin();it != s.end();it++){
    cout<<*it<<" ";
  }
}