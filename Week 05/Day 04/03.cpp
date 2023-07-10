#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,k;
    cin>>t;
    while(t--)
    {
        bool f = true;
        cin>>n>>k;
        if((n-(k-1))%2==1&&n-(k-1)>0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)cout<<"1 ";
            cout<<n-(k-1)<<endl;
        }
        else if((n-2*(k-1))%2==0&&n-2*(k-1)>0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)cout<<"2 ";
            cout<<n-2*(k-1)<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}