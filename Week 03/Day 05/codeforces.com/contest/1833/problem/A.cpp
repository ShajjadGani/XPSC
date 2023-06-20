#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        map<pair<char,char>,int>m;
        for(i=0;i<n-1;i++)
        {
            pair<char,char> p = make_pair(s[i],s[i+1]);
            if(m[p]==0)m[p]++;
        }
        cout<<m.size()<<endl;
    }
}