#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
// #define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
int n;
cin >> n;

cin>>n;
vec a(n);
set<ll>st;
st.insert(0);
ll xorvalue=0;
for(int i=0;i<n;i++){
cin>>a[i];
xorvalue^=a[i];
}
ll ans=0;
for(int i=0;i<n;i++){
    xorvalue^=a[i];
    for(int j=0;j<n;j++ ){
        if(i==j)
        continue;
      ll temp=a[j]+a[i];
      xorvalue^=temp;
      if(st.find(xorvalue)==st.end())
      st.insert(xorvalue);
      xorvalue^=temp;
    }
     xorvalue^=a[i];
}
cout<<(int)st.size()<<endl;
}
int main() {
    fastio;
  
solve();

    return 0;
}