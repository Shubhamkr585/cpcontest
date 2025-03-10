#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
    ll n=3;cin>>n;vec a(n);
for(int i=0;i<n;i++)
    cin>>a[i];
        ll re=a[0];
    bool flag=false;
for(int i=0;i<n;i++){
if(a[i]!=re){
    flag=true;
    break;
}
}if(!flag){
    cout<<"-1"<<endl;
    return;
}
ll pos=-1,mini=INT64_MAX;
for(int i=1;i<n;i++){
if(a[i]!=re){
mini=min(mini,i-pos-1);
pos=i;
}
}
mini=min(mini,n-pos-1);
cout<<mini<<endl;
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