#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
ll gcd(ll a,ll b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
void solve(){
ll n;
cin>>n;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
ll gcd1=a[0],gcd2=a[1];

for(int i=2;i<n;i+=2){
gcd1=gcd(gcd1,a[i]);
}
for(int i=3;i<n;i+=2){
gcd2=gcd(gcd2,a[i]);
}
//now iterating the loop to check for the condtion
bool flag=true;
for(int i=1;i<n;i+=2){
    if(a[i]%gcd1==0){
        flag=false;
        break;
    }
}
if(flag){
    cout<<gcd1<<endl;
    return ;
}
flag=true;
for(int i=0;i<n;i+=2){
    if(a[i]%gcd2==0){
        flag=false;
        break;
    }
}
if(flag){
    cout<<gcd2<<endl;
    return ;
}
cout<<0<<endl;
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