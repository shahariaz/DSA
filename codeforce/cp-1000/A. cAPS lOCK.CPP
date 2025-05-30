#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  string n;
  int b=0;
  for(int i=1;i<s.size();i++){
    if(islower(s[i])){
      b=1;
      break;
    }
  }
  if(b==1){
   cout<<s;
 }
  else { for(int i =0;i<s.size();i++){
      if(islower(s[i])) n+= toupper(s[i]);
      else n+=tolower(s[i]);
  }
  cout<<n;
}

}