#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,r;
        cin>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                int x,y;
                x = (s[i-2]-'0')*10;
                y = (s[i-1]-'0');
                r = r +(char)('a'+(x+y-1));
                i-=2;
            }
            else
            {
                int y;
                y = (s[i]-'0');
                r = r +(char)('a'+y-1);
            }
        }
        reverse(r.begin(),r.end());
        cout<<r<<endl;
    }
    return 0;
}