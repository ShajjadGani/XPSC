#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>>a(n);
        vector<int>b(n), s(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for(auto &i : b) cin >> i;
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());

        for(int i = 0; i < n; i++){
            s[a[i].second] = b[i];
        }
        for(auto &i : s) cout << i << " ";
        cout << endl;
    }
    return 0;
}