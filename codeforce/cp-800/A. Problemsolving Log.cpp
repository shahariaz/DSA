#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;cin>>t;
    while (t--)
    {
      int n;
      string s;
   map<char,int>mp;
      cin>>n>>s;
      for(int i=0;i<n;i++){
       mp[s[i]]++;
      }
      int  count =0;
      for(auto it:mp){
        if(it.second>=(it.first - 'A' +1)) count++;
      }
      cout<<count<<endl;


    }
    

}