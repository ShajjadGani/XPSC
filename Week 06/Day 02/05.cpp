#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
	    if(x<y || x<2*y){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    if(x%2!=0){
	        x=x/2+1;
	    }
	    else{
	        x=x/2;
	    }
	    if(x%2!=0 && y%2!=0){
	        cout<<"YES"<<endl;
	    }
	    else if(x%2==0 && y%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}