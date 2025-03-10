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
ll w=0,h=0;
for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    w=max(w,x);
    h=max(h,y);
}
cout<<2*(w+h)<<endl;
}
return 0;
}