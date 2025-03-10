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
ll f(vector<vector<ll>>&hash,vec&hh){
    //apply bs on answer
    ll low=0,high=hash.size()-1,ans=hash.size()-1;
    while(low<=high){
        ll mid=low+high>>1;
        bool flag=true;
        for(int i=0;i<26;i++){
            if(hh[i]>hash[mid][i]){
                flag=false;
                break;
            }
        }
        if(flag){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans+1;
}
 void solve() {
ll n,m;
cin >> n;
string s;
cin>>s;
vector<vector<ll>>hash(n);
vec h(26,0ll);
for(int i=0;i<n;i++){
    h[s[i]-'a']++;
    hash[i]=h;
}
cin>>m;
for(int i=0;i<m;i++){
    string name;
    cin>>name;
    vec hh(26,0);
    for(int j=0;j<name.size();j++){
        hh[name[j]-'a']++;
    }
    ll ans=f(hash,hh);
     
   cout<<ans<<endl;

}
 }
int main() {
    fastio;
   
solve();
    
    return 0;
}