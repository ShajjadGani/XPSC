#include<bits/stdc++.h> 
using namespace std;
int main(){
  long long int t, n, i, j, k, sum=0;
  string dtr, p;
  int c=0;
  cin>>t;
  while(t--)
  {
    cin>>n;
    string s[n];
    for(i=0;i<n-2;i++) cin>>s[i];
    string str=s[0];
    for(i=1;i<n-2;i++)
    {
      if(s[i][0]!=s[i-1][1]) str+=s[i][0];
      str+=s[i][1];
    }
    k=str.size();
    if(k<n)
      str+='a';
    cout<<str<<endl;
 
  }
return 0;
}