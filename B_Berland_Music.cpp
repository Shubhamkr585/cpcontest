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
vec p(n);
vector<pair<ll,int>>liked,disliked;//{rating ,index}
string s;
for(int i=0; i<n; i++)
cin>>a[i];
cin>>s;

ll like=n,dislike=1;
for(int i=0;i<n;i++){
if(s[i]=='1'){
liked.push_back({a[i],i});
}
else{
 disliked.push_back({a[i],i});
}
}
sort(all(liked),[&](auto & x,auto &y){return x.first>y.first;});
sort(all(disliked));
int j=0,k=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='1'){
       p[liked[j++].second]=like;
       like--;
    }
    else{
        p[disliked[k++].second]=dislike;
        dislike++;
    }
}

for(int i=0;i<n;i++)
cout<<p[i]<<" ";
 cout<<"\n";
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