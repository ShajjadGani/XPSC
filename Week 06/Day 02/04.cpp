#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)cout<<"-1";
        else
        {
            while(n--)cout<<n+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}