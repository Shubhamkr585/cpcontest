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
for(int i=0;i<n;i++)
   cin>>a[i]; 
unordered_map<ll,ll>mp;
for(int i=0;i<n;i++){
    mp[a[i]-i]++;
}
ll ans=0;
for(auto x:mp){
    ans+=x.second*(x.second-1)/2;
}

cout<<ans<<endl;
}
return 0;
}