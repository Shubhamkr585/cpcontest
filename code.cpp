#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100001
#define MOD 1000000007

void primefactor(ll ele,map<ll,ll>& fact){
    map<ll,ll>prime;
    ll cp=ele;
    while(ele%2==0){
        prime[2ll]++;
        ele/=2;
    }
    for(ll i=3ll;i*i<=ele;i+=2){
        while(ele%i==0){
            prime[i]++;
            ele/=i;
        }
    }
    if(ele>2)
    prime[ele]++;
    for(auto it:fact){
        prime[it.first]+=it.second;
    }
    ll ans=1ll;
    for(auto it:prime){
        ans=((ans%MOD)*((it.second+1)%MOD))%MOD;
    }
    cout<<ans<<" ";
}



void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    // store the prime factorisation of M
    map<ll,ll>fact;
    for(ll i=2;i<=m;i++){
        ll ele=i;
        while(ele%2==0){
            ele/=2;
            fact[2ll]++;
        }
        for(ll j=3ll;j*j<=ele;j+=2){
            
            while(ele%j==0){
                ele/=j;
                fact[j]++;
            }
        }
        if(ele>2)
        fact[ele]++;
    }
    
    for(ll i=0;i<n;i++){
        primefactor(a[i],fact);
    }
    
    
}
int main() {
    int t;
   
        solve();
        cout<<endl;


}
