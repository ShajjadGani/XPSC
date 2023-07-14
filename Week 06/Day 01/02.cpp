#include <iostream>
using namespace std;

int main() {
	int a,b,c,t;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
    	int d = a+b+c;
    	if(d<=1)cout<<"Water filling time"<<endl;
    	else cout<<"Not now"<<endl;
	}
	return 0;
}