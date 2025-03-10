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
for(auto &it:a)
cin >> it;
sort(all(a));
int mid=n/2,pos1=mid-1,pos2=mid+1;
cout<<a[mid]<<" ";
bool yes = true;
while(pos1>=0 || pos2<n)
{
    if(yes){
        cout<<a[pos1]<<" ";
        pos1--;
    }
    else{
        cout<<a[pos2]<<" ";
        pos2++f;
    }
    yes=!yes;
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