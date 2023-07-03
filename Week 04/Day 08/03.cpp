#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        char x,y;
        map<char,int>m;
        if(s[0]>s[s.size()-1])
        {
            x = s[s.size()-1];
            y = s[0];
        }
        else
        {
            y = s[s.size()-1];
            x = s[0];
        }

        for(int i=1;i<s.size()-1;i++)
        {
            if(x<=s[i]&&s[i]<=y)m[s[i]]=i+1;
        }
    }
}