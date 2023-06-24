#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int l,r,a[n],sum=0;
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(l=0,r=n-1;l<r;l++,r--)
        {
            int x = a[r]-a[l];
            sum+=x;
        }
        cout<<sum<<endl;
    }
}