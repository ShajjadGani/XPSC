#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v;
		ll sum = 0;
		for(int i = 0; i< n; i++){
			int num;
			cin >> num;
			sum += abs(num);
			v.push_back(num);
		}
		int c = 0;
		for(int i = 0; i< n; i++){
			if(v[i] < 0){
				int j = i;
				while(j < n && v[j] <= 0){
					j++;
				}
				i = j;
				c++;
			}
		}
		cout << sum << " " << c << endl;
	}
}
 
int main(){
    solve();
}