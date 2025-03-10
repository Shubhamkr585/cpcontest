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
ll k=0;
while((1<<(k+1))<=n-1) k++;
for(ll i=(1<<k)-1;i>=0;i--){
    cout<<i<<' ';
}
for(ll i=(1<<k);i<n;i++)
cout<<i<<' ';
cout<<endl;
}
return 0;
}