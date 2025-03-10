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
ll n,m,k;
cin >> n >> m>> k;
//k->paani mae kitna reh sakta h
string s;
cin >> s;
s='L'+s;
bool rached=false;
ll water=0;
for(int i=0;i<=n;){
if(s[i]=='L')
{
    //try to reach another L without having to use any k
    int pos=i+m;
    ll cnt=0;
    if(pos>n){
        cout<<"YES\n";
        return;
    }
    bool crocodile=s[pos]=='C';
    int finalpos=-1;
    if(s[pos]=='W'){
        crocodile=false;
        finalpos=pos;
    }
    while(pos<=n && pos>i && s[pos]!='L'){
          pos--;
    }
    if(i!=pos){
        i=pos;
        crocodile=false;
    }
    else{
        i=finalpos;
    }
    if(crocodile){
        cout<<"NO\n";
        return;
    }
    
}
else if(s[i]=='W'){
    
    water++;
    if(water>k){
        cout<<"NO\n";
        
        return;
    }
    i++;

}
else{
    cout<<"NO\n";
    return;
}

}
cout<<"YES\n";
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