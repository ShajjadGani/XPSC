#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[26]={0},j=0,ans=1;
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']=1;
                j++;
            }
            if(j>=3&&a[s[i+1]-'a']==0)
            {
                ans++;
                j=0;
                for (int k = 0; k < 26; k++) {
                    a[k] = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}