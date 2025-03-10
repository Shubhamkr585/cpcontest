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
cin >> n>>k;
vec a(n);
for(int i = 0; i <n;i++)
cin>>a[i];
sort(all(a));

ll low=n-1-k,high=n-1,sum=0,cp=k;
while(low<high && k>0){
    sum+=a[low]/a[high];
    // cout<<sum<<endl;
    low--;k--;
    high--;
}
ll rem=0;
for(int i=0;i<n-2*cp;i++){
    rem+=a[i];
}
sum+=rem;
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