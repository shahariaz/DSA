#include<iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    int ans=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                ans=abs(2-i)+abs(2-j);
                break;
            }
        }
    }
  cout<<ans<<endl;
    return 0;
}