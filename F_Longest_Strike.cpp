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
ll n,k;
cin >> n >> k;
vec a(n);
map mp;

for(int i = 0; i < n; i++){
cin>>a[i];
mp[a[i]]++;
}
vec freq;
for(auto it:mp){
    if(it.second>=k)
    freq.push_back(it.first);
}

if(freq.size()==0){
    cout<<-1<<endl;
    return;
}
sort(all(freq));
ll pos1=0,pos2=0,anspos2=-1,anspos1=0;
for(int i=0;i<freq.size();){
    int pos1=freq[i],j=i,c=1;
    while(j<freq.size()-1 && freq[j+1]-freq[j]==1){
          j++;
    }
    pos2=freq[j];

    if(pos2-pos1>anspos2-anspos1){
        anspos1=pos1;
        anspos2=pos2;
    }
    i=j+1;
}

cout<<anspos1<<" "<<anspos2<<endl;

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