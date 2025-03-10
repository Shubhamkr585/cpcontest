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
sort(all(a));
bool found=false;
int i=0;
    //find the element with least differnce
    int pos1=0,pos2=1,diff=a[1]-a[0];
    for(int i=2;i<n;i++){
       if(a[i]-a[i-1]<diff){
        diff=a[i]-a[i-1];
        pos1=i-1;
        pos2=i;
       }
    }
    cout<<a[pos1]<<" ";
    for(int i=pos2+1;i<n;i++){
     
        cout<<a[i]<<" ";
    }
    for(int i=0;i<pos1;i++)
    cout<<a[i]<<" ";
    cout<<a[pos2]<<endl;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
}