#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()


void solve(){
    ll n;
cin>>n;
string s;
cin>>s;
if(n==1){
    cout<<-1<<endl;
    return;
}
vec pref(n,0),suff(n,0);
for(int i=n-2;i>=0;i--){
    suff[n-1-i]=suff[n-2-i]+(s[i+1]=='1');
}
for(int i=0;i<n;i++){
    cout<<suff[i]<<endl;
}
//find the prefix sum

}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int t=1;
cin>>t;
while(t--){
solve();
return 0;
}
}