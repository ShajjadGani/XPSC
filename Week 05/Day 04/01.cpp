#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<3)cout<<"0"<<endl;
        else
        {
            if(n%2==0)cout<<(n/2)-1<<endl;
            else cout<<n/2<<endl;
        }
    }
    return 0;
}