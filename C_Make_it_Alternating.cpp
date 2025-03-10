#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
#define mod 998244353
ll fact[200001];
void pre(){
    fact[0]=1;
    for(ll i=1;i<200001;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
}

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll cnt=0,sum=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            int j=i+1;
            while(j<n-1 && s[j]==s[j+1]){
                j++;
            }
            sum=((sum%mod)*((j-i+1)%mod))%mod;
            cnt+=j-i;
            i=j;
        }
    }
    sum=(sum*(1ll*fact[cnt])%mod)%mod;
    cout<<cnt<<" "<<sum<<endl;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
pre();
while(t--){
solve();
}
return 0;
}