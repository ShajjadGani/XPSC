#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,k;
    cin>>t;
    while(t--)
    {
        k=1;
        cin>>n;
        while(1)
        {
            if(k<=n&&n<k*10)
            {
                cout<<n-k<<endl;
                break;
            }
            k*=10;
        }
    }
    return 0;
}