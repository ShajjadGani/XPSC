#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int ans=0,i = 1, j = 9;
        cin>>n;
        while(n!=0)
        {
            if(n<10&&n<j)
            {
                ans+=(n*i);
                break;
            }
            else
            {
                n-=j;
                ans+=(j*i);
                j--;
                i*=10;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}