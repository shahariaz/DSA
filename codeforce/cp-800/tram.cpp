#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,ans=-1,d,a,b,i;
	cin>>n;
	cin>>a>>b;
	t=b;
	for(i=1;i<n;i++){
		ans=max(ans,t);
		cin>>a>>b;
		t=t-a+b;
	}
	cout<<ans;
	return 0;
}