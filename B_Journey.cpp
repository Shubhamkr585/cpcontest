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
ll n,a,b,c;

cin >> n>>a>>b>>c;

ll sum=a+b+c;ll day=(n/sum)*3;
ll rem=n%sum;
if(rem>0){
    rem-=a;
day++;
}
if(rem>0){
    rem-=b;
    day++;
}
if(rem>0)
day++;
cout<<day<<endl;



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