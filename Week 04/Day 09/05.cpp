#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n-3;
        z = ceil(m/3.0);
        x = z+1;
        y = x+1;
        if(x+y+z==n)cout<<x<<" "<<y<<" "<<z<<endl;
        else if(n-(x+y)!=0) cout<<x<<" "<<y<<" "<<n-(x+y)<<endl;
        else cout<<x-1<<" "<<y<<" "<<n-(x+y)+1<<endl;
    }
    return 0;
}