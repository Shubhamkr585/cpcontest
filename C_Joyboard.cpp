#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    if(k==1){
        //all0
        cout << "1" << endl;
    }
    else if(k == 2){
        ll stor = 0;
        // 0 1 1 1 1 1 1 
        // 0 0 0 0 0 i-1 i-1 i-1...
        stor = min(n, m);
        if(m > n){
            ll neww = (m - n)/n;
            stor += neww;
        }
        cout << stor << endl;
        return 0;
    }
    else if(k == 3){
        ll stor = 0;
        // all - val(k = 1) - val(k = 2)
        stor = m;
        stor -= min(n, m);
        if(m >= n){
            ll neww = (m - n)/n;
            stor -= neww;
        };
        cout << stor << endl;
        return 0;
    }
    else{
        cout << "0" << endl;
        return 0;
    }
    return 0;
}
 
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){

solve();
}
return 0;
}