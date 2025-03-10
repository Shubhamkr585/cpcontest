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
bool isSorted(vec &a){
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}
 void solve() {
ll n,k;
cin >> n >> k;
vec a(k);
for(int i=0;i<k;i++)
cin>>a[i];
bool sorted=isSorted(a);
if(k==1){
    cout << "YES" << endl;
    return;
}
if(!sorted){
    cout<<"NO"<<endl;
    return;
}

ll maxi=100000000;
for(int i=k-2;i>=0;i--){
    ll diff=a[i+1]-a[i];
    if(diff>maxi){
        cout<<"NO"<<endl;
        return;
    }
    else{
        maxi=diff;
    }
}
ll ele=a[1]-maxi;
if(ele>maxi){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    
}

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