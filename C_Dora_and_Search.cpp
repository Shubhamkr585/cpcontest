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
for(int i=0;i<n;i++)
cin>>a[i];
 ll smallest=1,largest=n;
ll low=0,high=n-1;
while(low<high){
     if(a[low]==smallest){
        low++;
        smallest++;
     }
     else if(a[low]==largest){
        low++;
        largest--;
     }
    else if(a[high]==smallest){
        high--;
        smallest++;
    }
    else if(a[high]==largest){
        largest--;
        high--;
    }
    else break;
}
if(1+low<high)
cout<<low+1<<" "<<high+1<<endl;
else cout<<-1<<endl;
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