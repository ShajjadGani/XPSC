#include <bits/stdc++.h>
using namespace std;
int main(){    
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];        
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int s = -1;
        for(int i=0;i<n;i++){
            if((a[i] & x) == x){
                s = s & a[i];
            }
        }
        if(s==x){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    return 0;
}