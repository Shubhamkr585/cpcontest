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
vec a(n+1),prefix(n+1);
prefix[0]=0;
string s;
for(int i=1;i<=n;i++){
cin>>a[i];
prefix[i]=a[i]+prefix[i-1];
}
cin>>s;
s=" "+s;
ll i=1,j=n;
ll ans=0;
while(i<=j){
    if(s[i]!='L')
    i++;
    else if(s[j]!='R')
    j--;
    else if(s[i]=='L' && s[j]=='R'){
     ans+=prefix[j]-prefix[i-1];
     i++;j--;
    }
}
cout<<ans<<endl;
}
return 0;
}