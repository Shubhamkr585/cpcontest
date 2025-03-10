#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()

pair<ll,bool> prime(ll n){
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
    if((n-n/i)%(n/i)==0)
    return {n/i,false};
    }
}
return {0,true};
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll l,r;
cin>>l>>r;
if(l<=3 && r<=3)
cout<<-1<<endl;
else if(r==l ){
pair<ll,bool> p=prime(l);
if(p.second)
cout<<-1<<endl;
else
cout<<p.first<<" "<<l-p.first<<endl;
} 

else if(r-l>=2){
    ll ans=-1;
if(l%2==0 && r%2!=0)
ans=(r-1)/2;
else if(r%2==0)
ans=r/2;
else{
ans=(r-1)/2;
}
cout<<ans<<" "<<ans<<endl;
}
else{
    ll ans=l%2==0?l:l+1;
    ans=ans/2;
    cout<<ans<<" "<<ans<<endl;
}

}
return 0;
}