#include<iostream>
using namespace std;



bool isArmstrong(int a,int b ){
   int ans = 0;
   while (a)
   {
    
   }
   

return 0;
}
int count(int a){
    int count = 0;
    while (a)
    {
         count++;        
       a/=10;
      /* code */
    }
 return count;
    
}
int main(){

int a ;
cin>>a;
int digit = count(a);
cout<<digit<<endl;
cout<<isArmstrong(a,digit)<<endl;

}