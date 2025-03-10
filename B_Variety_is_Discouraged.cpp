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
vec a(n+1);
map fre;
for(int i=1;i<=n;i++){
    cin >> a[i];
    fre[a[i]]++;
}

int l=0,r=0,ansl=0,ansr=0,i=1;

while(i<=n){
  if(fre[a[i]]==1){
    while(i<=n && fre[a[i]]==1){
     if(l==0)
     l=i;
     r=i;
     if(r-l>=ansr-ansl){
        ansl=l;
        ansr=r;
     }
     i++;
    }
  }
  else {i++;l=0,r=0;}
   
}
if(ansl==0 && ansr==0)
cout << 0 << endl;
else
cout << ansl<<" "<<ansr << endl;


 }
int main() {
    fastio;
//     int t = 1;
//     cin >> t;
//     while (t--) {
// solve();
//     }
vec a={1,2,3,4,5};
int lb=lower_bound(a.begin(),a.end(),3)-a.begin();
cout<<lb<<endl;
    return 0;
}