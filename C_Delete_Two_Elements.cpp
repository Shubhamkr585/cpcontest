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
ll sum=0;
for(auto & i:a){
    cin>>i;
    sum+=i;
}
if((2*sum)%n!=0)
{
    cout<<0<<endl;
    return;
}
map mp;
for(int i=0; i<n; i++){
    mp[a[i]]++;
}
ll count=0;
ll r=(2*sum)/n;
for(int i=0; i<n; i++){
 ll remove=r-a[i];
 count+=mp[remove];
 if(remove==a[i])
 count--;
}
cout<<(count)/2<<endl;
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