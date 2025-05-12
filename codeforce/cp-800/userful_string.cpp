#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<char> toSort;
    for(char ch : a){
        if(ch != '+'){
            toSort.push_back(ch);
        }
    }
    sort(toSort.begin(),toSort.end());
    int j =0;
    for(int i = 0; i<a.size();i++){
        if(a[i]!='+'){
            a[i] = toSort[j++];
        }
    }
    cout<<a<<endl;
}