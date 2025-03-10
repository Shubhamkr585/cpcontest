#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
string s;
cin>>s;
n=s.length();
s=" "+s;
ll prev=1,l=0;
for(int i=1;i<=n;i++){
    if(s[i]=='0'){
        while(i<=n && s[i]=='0'){
        l++;
        i++;
        }
        break;
    }
    else
    prev=i;
}
if(prev==n)
cout<<1<<" "<<n<<" "<<n<<" "<<n<<endl;
else{
    ll len=n-prev-1;
    ll shift=0,move=l-1,pos=prev;
    pos=max(1ll,prev-move);
    shift=prev-pos;

    cout<<1<<" "<<n<<" "<<prev-shift<<" "<<prev+len-shift<<endl;
}
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