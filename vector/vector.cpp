#include<bits/stdc++.h> 
using namespace std;

void print (vector<int> v){
  for(auto it:v){
    cout << it << " ";
  }
  cout << endl;
}

int main(){
    vector<int> v;
    vector<int> v2(5,10);
    vector <int> v3(v2.begin(),v2.end());
    vector<int> v4(v3);
    vector<int> v5 = {1,2,3,4,5};
    //push
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
     v.pop_back();
    print(v);
    print(v2); print(v3); print(v4); print(v5);
    /// for clearing full verctor => v.clear();

    vector<int> :: iterator it;
    for (it = v.begin(); it !=v.end(); it++){
        cout << *it << " "; 
        cout << *it << " ";
    }
}