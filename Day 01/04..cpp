#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
    cin>>n;
	string ans="";
	string a[n];	
 	unordered_map <string , int > m;
	for(int i=0;i<n;i++)
	{
	    string s;
	    cin>>s;
	    a[i]=s;
	    m[s]++;
	}
	
	for(int i=n-1;i>=0;i--)
	{      
	    if(m[a[i]] == 0)
	    {
	        continue;
	    }    
	    else
	    {
	        string s1=a[i];	        
	        ans=ans+ s1[s1.size()-2];
	        ans= ans+ s1[s1.size()-1];	        
	        if(m[a[i]]>=2)
	        m[a[i]]=0;
	    }
	}
	cout<<ans;
	return 0;
}