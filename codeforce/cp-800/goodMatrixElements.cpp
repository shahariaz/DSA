#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int sum=0;
    for(int i = 0;i<n; i++){
        for(int j = 0;j<n; j++){
            cin>>a[i][j];
            if(i==j){
                sum+=a[i][j];
            }else if(j==(n-1)/2 && i!=(n-1)/2){
                sum+=a[i][j];
            }else if(i==(n-1)/2 && j!=(n-1)/2){
                sum+=a[i][j];
            }else if(i+j==n-1 && i!=j){
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
}