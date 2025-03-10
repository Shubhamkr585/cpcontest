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
vec a(n);
REP(i,n) cin >> a[i];
bool yes=false;
sort(all(a));
map mp;//{diff,index}
int pos=-1;
for(int i=1;i<n;i++){
    if(a[i]==a[i-1]){
        pos=i;
        break;
    }

}
if(pos==-1){
    cout<<-1<<endl;
    return;
}
ll val=a[pos-1];
vec b;
for(int i=0;i<n;i++){
    if(i==pos-1){
        i++;
    }
    else{
        b.push_back(a[i]);
    }
}
for(int i=0;i<n-3;i++){
    if((b[i+1]-b[i])<2*val){
        cout<<val<<" "<<val<<" "<<b[i]<<" "<<b[i+1]<<endl;
        return;
    }
}

cout<<-1<<endl;

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