#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
long long int g(ll a,ll b)
{
    if(b==0)
    return a;
    return g(b,a%b);
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
vec a(n);
ll sum=0;
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
}
ll ps=0,gcd=1,temp=1;
for(int i=0;i<n-1;i++){
ps+=a[i];
sum-=a[i];
temp=g(ps,sum);
gcd=max(temp,gcd);
}
cout<<gcd<<endl;
}
return 0;
}