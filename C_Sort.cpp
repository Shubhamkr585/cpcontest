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
ll n,q;
cin>>n>>q;
string a,b;
cin>>a>>b;

vector<vec> dp1(n+1,vec(26,0));
vector<vec> dp2(n+1,vec(26,0));
for(ll i=1;i<=n;i++){
    dp1[i]=dp1[i-1];
    dp1[i][a[i-1]-'a']++;
}
for(ll i=1;i<=n;i++){
    dp2[i]=dp2[i-1];
    dp2[i][b[i-1]-'a']++;
}

for(int i=0;i<q;i++){
    ll l,r;
    cin>>l>>r;  
    ll ans=0;
   for(int j=0;j<26;j++){
    ll a=dp1[r][j]-dp1[l-1][j];
    ll b=dp2[r][j]-dp2[l-1][j];
     if(a>b)
     ans+=a-b;
}
cout<<ans<<endl;
}
}
return 0;
}