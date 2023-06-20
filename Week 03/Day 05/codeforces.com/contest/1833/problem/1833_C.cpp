#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)sum++;
        }

        if(sum==n)cout<<"YES"<<endl;
        else
        {
            sort(a,a+n);
            if(a[0]%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}