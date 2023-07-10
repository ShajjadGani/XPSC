#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2==1)cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            j = 2;
            for(i=0;i<n/2;i++)
            {
                cout<<j<<" ";
                j+=2;
            }

            j = 1;
            for(i=0;i<(n/2)-1;i++)
            {
                cout<<j<<" ";
                j+=2;
            }
            cout<<j+(n/2)<<endl;
        }
    }
    return 0;
}