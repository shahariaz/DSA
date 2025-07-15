#include<iostream>
using namespace std;


bool checkPal(string s, int start,int end){
  if(start>=end) return 1;
  if(s[start] !=s[end]) return false;
 return checkPal(s,start+1,end-1);
}