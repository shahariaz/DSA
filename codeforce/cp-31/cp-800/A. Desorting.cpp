#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long n;
	   cin>>n;
	   int a[n];
	   for(int i=0; i<n; i++){
	       cin>>a[i];
	       
	   }
	   int ans=INT_MAX;
	   for(int i=0; i<n-1; i++){
	       if(a[i]<=a[i+1]){
	           if(ans>a[i+1]-a[i]){
	               ans = a[i+1]-a[i];
	           }
	           
	       }else{
	            ans =-1;
	            break;
	       }
	   }
	   if(ans<0){
	       cout<<0<<endl;
	   }else{
	       if(ans==0){
	           cout<<1<<endl;
	       }
	       else if(ans%2==0){
	           cout<<(ans/2)+1<<endl;
	       }else{
	           cout<<(ans+1)/2<<endl;
	       }
	       
	   }
	   
	}
	
}