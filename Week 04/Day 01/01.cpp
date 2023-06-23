#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        vector<int> p;
        map<long long, int> m;

        for (int i = 0; i < n; i++) {
            long long val = log2(v[i]) + 1;
            m[val]++;
            p.push_back(val);
        }

        sort(p.begin(), p.end());
        long long s = m[p[p.size() - 1]];
        cout << (s + 1) / 2 <<endl;
    }

    return 0;
}