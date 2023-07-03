#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m,n,x,y;
    cin>>t;
    while(t--)
    {
        int ans=100000000,c,a=12,b=60,d;
        bool f = true;
        cin>>n>>h>>m;
        while(n--)
        {
            cin>>x>>y;
            c = (h*60)+m;
            d = (x*60)+y;
            if(c==d)
            {
                cout<<"0 0"<<endl;
                f = false;
                break;
            }
            else if(c>d)
            {
                int k;
                k = (1440-c)+d;
                ans = min(ans,k);
            }
            else
            {
                ans = min(ans,d-c);
            }
        }
        if(f)cout<<ans/60<<" "<<ans%60<<endl;
        
    }
    return 0;
}