#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,m,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        
        for(j=0;j<m;j++)
        {
            int l = n;
            for(i=n-1;i>=0;i--)
            {
                if(a[i][j]=='o')l=i;
                else if(a[i][j]=='*')
                {
                    a[i][j]='.';
                    a[l-1][j]='*';
                    l = l-1;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}