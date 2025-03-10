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

 void solve() {
ll a,b,c;
cin >> a>>b>>c;


ll mini=min(a,b);
ll rem=max(a,b)-mini+c;
if(mini<=rem){
    cout<<mini<<endl;
    return;
}

ll chaiye=(mini*2+rem)/3;
cout<<chaiye<<endl;

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