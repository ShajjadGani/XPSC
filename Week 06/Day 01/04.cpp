#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,l;
	    cin>>n>>k>>l;
	    long long int a[n],b[n],i;
	    i=0;
	    vector<int>v;
	    while(i<n)
	    {
	        cin>>a[i]>>b[i];
	        if(b[i]==l)
	        {
	            v.push_back(a[i]);
	        }
	        i++;
	    }
	    if(v.size()<k)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        sort(v.begin(),v.end(),greater<int>());
	        long long int sum=0;
	        for(i=0;i<k;i++)
	        {
	            sum+=v[i];
	        }
	        cout<<sum<<endl;
	    }
	}
	return 0;
}