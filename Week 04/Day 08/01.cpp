#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int x,y;
        x = a-1;
        y = abs(b-c)+abs(c-1);
        
        
        if(x==y)cout<<"3"<<endl;
        else if(x<y)cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}