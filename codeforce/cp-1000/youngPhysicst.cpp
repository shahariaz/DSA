#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0,y=0,z=0,i,j,k,l;
	cin>>n;
	for(l=0;l<n;l++){
		cin>>i>>j>>k;
		x+=i;
		y+=j;
		z+=k;
	}
	if(x==0 && y==0 && z==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}