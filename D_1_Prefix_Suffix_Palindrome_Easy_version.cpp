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
#define MOD 10000000007

//longest palindromic subsequence
ll lcs(ll i,ll j,string &s,string &rev){
    if(i<0ll || j<0ll)
    return 0ll;
    ll take=-MOD,nottake=-MOD;
    if(s[i]==rev[j]){
        take=1ll+lcs(i-1,j-1,s,rev);
    }
    else
    nottake=max(lcs(i-1,j,s,rev),lcs(i,j-1,s,rev));
    return max(take,nottake);
}
 void solve() {
ll n;
string s;
cin>>s;
n=s.length();
string rev=s;
reverse(rev.begin(),rev.end());
cout<<lcs(n-1,n-1,s,rev)<<endl;


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