#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a1,a2;
    string s;
    cin>>t;
    while(t--)
    {
        a1 = 0;
        a2 = 0;
        char c = 'A';
        cin>>n>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c&&c=='A')a1++;
            else if(s[i]==c&&c=='B')a2++;
            else c = s[i];
        }
        cout<<a1<<" "<<a2<<endl;
    }
    return 0;
}