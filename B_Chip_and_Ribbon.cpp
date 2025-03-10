#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
vec a(n);
for (ll i=0;i<n;i++)
    cin>>a[i];
    ll tele=0;
    ll i=0;
for(int i=1;i<n;i++){
    tele+=max(0ll,a[i]-a[i-1]);
}
tele+=a[0]-1;
cout<<tele<<endl;
}
return 0;
}