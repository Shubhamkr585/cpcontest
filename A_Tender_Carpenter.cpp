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
bool dp(ll index1,ll index2,string &s,string &t,string& ans,string& rev){
  if(index1<=-1 &&  index2<=-1) return true;
  if(index1>=0 && index2<0 || index1<0 && index2>=0) {
    return ans==rev;
  }
  bool t1=false,t2=false;
  if(s[index1]==t[index2]){
    ans.push_back(s[index1]);
  t1=dp(index1-1,index2-1,s,t,ans,rev);
  }
  else t2=dp(index1-2,index2,s,t,ans,rev);
  return t1||t2;
}

 void solve() {

 string s,t,ans="",rev;
 cin>>s>>t;
 rev=t;
 reverse(all(rev));
 ll i=s.size()-1,j=t.size()-1;
 if(dp(i,j,s,t,ans,rev)) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

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