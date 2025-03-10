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
string s;
cin>>s;
vector<bool>p(n+1);
vector<ll>price(n+1,0);

for(int i=1;i<=n;i++){
    p[i]=s[i-1]=='1';
}
for(int i=n;i>=1;i--){
    for(int j=i;j<=n;j+=i){
        if(p[j])
        break;
        price[j]=i;
    }
}
ll ans=0;
for(ll i=1;i<=n;i++){
    ans+=price[i];
}
cout<<ans<<endl;
}
return 0;
}