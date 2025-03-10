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
cin >> n >> m;
vec a(n),paisa(m),def(m);
REP(i,n) cin >> a[i];
vector<pair<ll,ll>>temp(m);

for(int i = 0; i < m; i++) 
cin>>temp[i].first>>temp[i].second;

sort(temp.begin(),temp.end());
for(int i = 0; i < m; i++)
def[i]=temp[i].first;



paisa[0]=temp[0].second;

for(int i = 1; i < m; i++)
paisa[i]=temp[i].second+paisa[i-1];



for(int i = 0; i < n; i++){
    ll lb=lower_bound(def.begin(),def.end(),a[i])-def.begin();
    if(lb==m){
        cout<<paisa[m-1]<<" ";
    }
    else{
        if(a[i]<def[lb]){
          if(lb==0)
          cout<<0<<endl;
          else
          cout<<paisa[lb-1]<<" ";
        }
        else
        cout<<paisa[lb]<<" ";
    }
}
cout<<"\n";
}
int main() {
    fastio;

solve();


    return 0;
}