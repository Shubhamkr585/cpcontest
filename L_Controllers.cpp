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
void f(ll q,bool flag){
 for(int i=0;i<q;i++){
    ll a,b;
    cin>>a>>b;
    cout<<((flag)?"YES\n":"NO\n");
 }
}
 void solve() {
ll n,q;
cin >> n;
string seq;
cin>>seq;
ll pos=0,neg=0;
for(int i=0;i<n;i++)
seq[i]=='-'?(++neg):(++pos);
cin>>q;
bool flag=pos==neg;
if(flag) {f(q,flag);return;}

if(pos==0 || neg==0)
{
    f(q,false);
    return;
}

for(int i=0;i<q;i++){
    ll a,b;
    cin>>a>>b;

    //try to make the ratio same
    if(a<b) swap(a,b);
    ll mini=min(pos,neg),maxi=max(pos,neg);
    ll low=1,high=mini-1;
    
    if(a*mini==b*maxi){
        cout<<"YES\n";
        continue;
    }
    bool flag=false;
    while(low<=high){
     ll mid=low+high >>1;
     if(a*(mini-mid)==b*(maxi-mid)){
        flag=true;
        break;
     }
     else if(a*(mini-mid)>b*(maxi-mid)){
        low=mid+1;
     }
     else{
        high=mid-1;
     }

    }
    cout<<((flag)?"YES\n":"NO\n");


}

}
int main() {
    fastio;
   
solve();
    
    return 0;
}