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
ll n,m;
cin >> n>>m;
vector<vector<ll>>p(n+1,vector<ll>(m+1));
for(ll i=1;i<=n;i++){
    vec temp(m+1);
    for(ll j=1;j<=m;j++){
        ll x;
        cin>>x;
        temp[j]=x;
    }
    sort(temp.begin()+1, temp.end());
    p[i]=temp;
    p[i][0]=i;
}
sort(p.begin()+1, p.end(), [&](const vector<ll>& a, const vector<ll>& b) {
        return a[1] < b[1];
    });
ll maxi=-1;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n-1;j++){
        
        if(p[j][i]>p[j+1][i]  || maxi>p[1][i]){
            cout<<-1<<endl;
            return ;
        }
        if(i!=m)
        maxi=p[n][i];
    }
}
for(int i=1;i<=n;i++){
    cout<<p[i][0]<<" ";
}
cout<<endl;


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