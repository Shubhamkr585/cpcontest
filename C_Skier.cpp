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
#define maxi 10000000000
 void solve() {
ll n,sum=0;
string s;
cin>>s;
n=s.length();
multiset<pair<pair<ll,ll>,pair<ll,ll>>>st;
pair<ll,ll>curr={0ll,0ll},parent={maxi,maxi};
st.insert({curr,parent});
for(int i=0; i<n; i++){
    parent=curr;
if(s[i]=='N'){
curr.first+=1ll;
}
else if(s[i]=='S'){
curr.first-=1ll;
}
else if(s[i]=='E'){
curr.second+=1ll;
}
else{
curr.second-=1ll;
}
if(st.find({parent,curr})==st.end()){
    sum+=5ll;
   
}
else
sum+=1ll;
 st.insert({curr,parent});
}
cout<<sum<<endl;
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

