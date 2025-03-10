#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
vec dp(200001,0);
ll sum=0;
for(ll i=1;i<=200001;i++){
string s=to_string(i);
for(ll j=0;j<s.length();j++)
sum+=s[j]-'0';
dp[i]=sum;
}
while(t--){
ll n;
cin>>n;
cout<<dp[n]<<endl;
}
return 0;
}