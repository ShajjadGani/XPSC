#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    string s;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n>>s;
        string c,c1 = "01", c2 = "10";
        if(s[0]=='0')
        {
            for(i=0;i<n-1;i++)
            {
                if(s[i]==c1[0]&&s[i+1]==c1[1])ans++;
            }
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(s[i]==c2[0]&&s[i+1]==c2[1])ans++;
            }
        }
        if(ans&1)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
    return 0;
}