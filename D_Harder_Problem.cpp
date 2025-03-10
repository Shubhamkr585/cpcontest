#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
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
for(int i=0;i<n;i++)
cin>>a[i];
queue<ll>q;
map mp;
for(int i=0;i<n;i++){
    if(!mp[a[i]]){
        q.push(a[i]);
        mp[a[i]]=1;
    }
}
ll size =q.size();
vec ans;
ll rem=n-size;
if(rem==0){
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
else{
    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }
    for(ll i=1;i<=200000 && rem>0;i++){
        if(mp[i]==0){
            ans.push_back(i);
            rem--;
        }
    }
    for(ll i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
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