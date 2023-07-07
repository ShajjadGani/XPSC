#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],g1=0, g2=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0)
                g1=__gcd(g1,a[i]);
            else
                g2=__gcd(g2,a[i]);
        }
        bool f=true;
        ll ans=0;
        for(int i=0; i<n; i+=2)
        {
            if(a[i]%g2==0)f=false;
        }
        if(f)ans=g2;
        f=true;
        for(int i=1; i<n; i+=2)
        {
            if(a[i]%g1==0)
                f=false;
        }
        if(f)ans=g1;
        cout<<ans<<endl;
    }
    return 0;
}