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
void print(stack<ll>st,ll index){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"index: "<<index<<endl;;
}
 void solve() {
ll n;
cin >> n;
vec a(n);
stack<ll>st;
for(int i = 0; i < n; i++)
cin>>a[i];


if(a[0]<a[n-1])
cout<<"YES\n";
else cout<<"NO\n";

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