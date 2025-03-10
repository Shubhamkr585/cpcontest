#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
//not allowed
// bool possible(ll i,vec & b,ll x){
//     for(ll j=0;j<b.size();j++){
//         if(b[j]>i)
//         return false;
//         if(b[j]!=-1 && (i-b[j])%x==0 ){
//             b[j]=-1;
//         return true;
//         }
//     }
//     return false;
// }
void solve(){
    ll n=5,x=2;
cin>>n>>x;
vec a(n);
vec b;
map<ll,ll>mp;
ll ans=n;
for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
if(mp.find(0)==mp.end() ||mp[0]==0){
    cout<<0<<endl;
    return;}
for(int i=1;i<n;i++){
    if(mp.find(i)==mp.end() ){
        if(mp[i%x]<=1){
            cout<<i<<endl;   
            return ;
        }
        else
        mp[i%x]--;
    }
}
cout<<ans<<endl;

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