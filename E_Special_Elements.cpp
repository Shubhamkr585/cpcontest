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
ll n,count=0;
cin >> n;
vec a(n);
for(int i = 0; i < n; i++)
cin>>a[i];
for(int i = 0; i < n; i++){
    // left half
    ll sum=0,pos=0;
    bool flag=false;
    for(int j=0;j<i;j++){
      sum+=a[j];
       while(sum>a[i]){
        sum-=a[pos];
        pos++;
      }
      if(sum==a[i] && j-pos>0){
        flag=true;
        break;
      }
     
    }
    if(flag){
        count++;
    continue;
    }
    //right half
    pos=i+1,sum=0;
    for(int k=i+1;k<n;k++){
        sum+=a[k];
        while(sum>a[i]){
            sum-=a[pos];
            pos++;
        }
          if(sum==a[i] && k-pos>0){
        flag=true;
        break;
      }
    }
      if(flag)
      count++;
}
cout<<count<<endl;
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