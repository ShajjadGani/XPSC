#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; 
    cin>>t;
	int a[33000], c=0;
	for(int i=0; i<=33000; i++){
	    int f=i, r=0;
	    while(f!=0){
	        r=(r*10)+(f%10);
	        f/=10;
	    }
	    if(r==i) a[c++]=i;
	}
    
	while(t--){
	    int n; cin>>n;
	    unordered_map<long long, long long> m;
	    set<long long> s;
	    long long count=0;
	    for(int i=0; i<n; i++){
	        int p; 
            cin>>p;
	        s.insert(p);
	        m[p]++;
	    }
	    for(auto i: s){
	        for(int j=0; j<c; j++){
	            if(m[i^a[j]]){
	                count+=(m[i]*m[i^a[j]]);
	            }
	        }
	    }
	    count+=n;
	    cout<<count/2<<endl;
	}
	return 0;
}