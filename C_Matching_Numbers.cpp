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
ll n;
cin >> n;
if(n%2==0)
{
    cout<<"No"<<endl;
    return;
}
if(n==1){
    cout<<"Yes"<<endl;
    cout<<"1 "<<2<<endl;
    return;
}
if(n==3){
    cout<<"Yes"<<endl;

    cout<<"1 6\n 3 5\n 4 2\n";
    return;
}
    cout<<"Yes"<<endl;
ll m=(n-1)/2;
ll start=3*m+2;
for(int i=1;i<=m;i++){
    cout<<i<<" "<<start+i<<endl;
}
start=m+1;
for(int i=m+1;i<=2*m+1;i++){
    cout<<i<<" "<<start+i<<endl;
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