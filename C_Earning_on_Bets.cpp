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
for(int i=0;i<n;i++){
cin>>a[i];
}
ll ans = a[0];
for (ll i = 1; i < n; i++){
ans = (((a[i] * ans))/ 
(__gcd(a[i], ans)));
}
ll sum=0;
for(int i=0;i<n;i++)
sum+=ans/a[i];
if(sum<ans){
    for(int i=0;i<n;i++)
    cout<<(sum+a[i]-1)/a[i]<<" ";    
    cout<<endl;
}
else
cout<<"-1"<<endl;
}
return 0;
}