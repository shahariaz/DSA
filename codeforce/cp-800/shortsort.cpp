#include<bits/stdc++.h>
using namespace std;


int main(){
 int t;
 cin>>t;
 while (t--)
 {
  string a,b;
 cin>> a;
 b = "abc";
 if(a==b){
  cout<<"YES"<<endl;
 }else{
   for (int i = 0; i < a.size()-2; i++)
 {
  string c = a;
  swap(c[i],c[i+1]);
  if(c==b){
    cout<<"YES"<<endl;
    break;
  } 
    c=a;
    swap(c[i],c[i+2]);
    if(c==b){
       cout<<"YES"<<endl;
       break;
    }
   c=a;
   swap(c[i+1],c[i+2]);
   if(c==b){
    cout<<"YES"<<endl;
    break;
 }else{
  cout<<"NO"<<endl;
 }
 }
 }

 }
 

 
}