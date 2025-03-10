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
string s;
cin >> s;
vector<string>v={"RRG","RRB","BRG","BGR","GRB","GBR"};
vec cnt(6,0);
for(int i=0;i<6;i++){
    string t=v[i];
    ll c=0;
    for(int j=0;j<n;j+=3){
        c+=((s[j]!=t[0]))+(j+1<n && s[j+1]!=t[1])+(j+2<n && s[j+2]!=t[2]);
        
}
cnt[i]=c;
 }
int ind=min_element(all(cnt))-cnt.begin();
cout<<cnt[ind]<<endl;
string temp=v[ind];
for(int i=0;i<n;i+=3){
    s[i]=temp[0];
    if(i+1<n)s[i+1]=temp[1];
    if(i+2<n)s[i+2]=temp[2];
}
cout<<s<<endl;



}
int main() {
    fastio;
    
solve();
    
    return 0;
}