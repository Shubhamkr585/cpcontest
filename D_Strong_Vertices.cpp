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
vec b(n);
vec c(n);
ll maxi=INT_MIN;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
    c[i]=a[i]-b[i];
    maxi=max(c[i],maxi);
}
set<ll> s;
for(int i=0;i<n;i++){
    if(c[i]==maxi)
    s.insert(i+1);
}
cout<<s.size()<<endl;
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}