#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],j=0;
        for(i=0;i<n;i++)cin>>a[i];

        int b[n+1]={0};
        for(i=n-1;i>=0;i--)
        {
            if(b[a[i]]!=0)break;
            else 
            {
                b[a[i]]++;
                j++;
            }
        }
        cout<<n-j<<endl;
    }
    return 0;
}