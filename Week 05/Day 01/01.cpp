#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        y =0;
        if(n%2==0)cout<<"0"<<endl;
        else{
        while(n!=0)
        {
            x = n%10;
            if(x%2==0)y=1;
            n/=10;
        }
        if(x%2==0)cout<<"1"<<endl;
        else if(y==1)cout<<"2"<<endl;
        else cout<<"-1"<<endl;
        }
    }
    return 0;
}