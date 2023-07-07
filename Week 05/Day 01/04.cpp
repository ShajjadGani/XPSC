#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b1,b2,b3,b4,b5,b6,b7;
    cin>>t;
    while(t--)
    {
        cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
        cout<<b1<<" "<<b2<<" "<<b7-(b1+b2)<<endl;
    }
    return 0;
}