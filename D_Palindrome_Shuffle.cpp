#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool check(ll mid,ll low,ll high,string &s,vector<vector<int>>&dp) {

}
 void solve() {
ll n;
string s;
cin>>s;
int low=0,high=s.size()-1;
while(low<high && s[low]==s[high]) {low++,high--;}
if(low>high) {cout<<0<<endl;
return;
}
//compute the prefixsum
vector<vector<int>>dp(s.size(),vector<int>(26,0));
vec temp(26,0);
for(int i=0;i<s.size();i++) {
    temp[s[i]-'a']++;
    dp[i]=temp;
}
string s1=s.substr(low,high-low+1);
ll ans=high-low;
ll len=s1.size();//ye hamesha even hoga also 1 can't  be the answer
ll start=low,end=high;
while(high-low>1) {
    ll mid=(low+high)/2;
    
    


}
cout<<ans<<endl;
 }
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}






