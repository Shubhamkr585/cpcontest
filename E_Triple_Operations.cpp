#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
vec dp(200001,0),prefix(200001,0);
ll p=3;
dp[1]=1;
for(ll i=2;i<=200001;i++){
    if(i<p)
    dp[i]=dp[i-1];
    else{
        p=p*3;
        dp[i]=dp[i-1]+1;
    }
}
for(ll i=1;i<=200001;i++){
    prefix[i]=prefix[i-1]+dp[i];
}

while(t--){
ll l,r;
cin>>l>>r;
ll ans=dp[l];
ans+=prefix[r]-prefix[l-1];
cout<<ans<<endl;
}
return 0;
}