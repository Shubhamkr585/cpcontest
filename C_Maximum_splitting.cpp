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
set<ll>prime={1,2,3,5,7,11};
if(prime.find(n)!=prime.end()){
    cout<<-1<<endl;
    return;
}

if(n%4==0){
    cout<<n/4<<endl;
}
else if(n%4==1){
    cout<<(n-9)/4+1<<endl;
}
else if(n%4==2){
    cout<<(n-6)/4+1<<endl;
}
else if(n%4==3){
    cout<<(n-15)/4+2<<endl;
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