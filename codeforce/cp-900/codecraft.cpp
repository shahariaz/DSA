#include<bits/stdc++.h>
using namespace std;
int main(){
  string month[12] ={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   string m;
   cin>>m;
   int a,b=0,c;
   cin>>a;
   if(a%12==0){
    cout<<m;
   }else{
    for(int i=0;i<12;i++){
      if(month[i]==m){
          break;
      }else{
        b++;
      }
    }
    if(a+b<12){
      cout<<month[((a+b))]<<endl;
    }else{
    
      cout<<month[((a+b)%12)];
    }
   
  
   }
}