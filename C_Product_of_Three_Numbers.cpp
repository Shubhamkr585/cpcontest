#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void add_divs(int x, map<ll, ll>&divs){
    int i = 2;
    while(i * i <= x){
        while (x % i == 0){
            divs[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) divs[x]++;
}
void solve(){
ll n;
cin>>n;
map<ll,ll>divs;
    add_divs(n,divs);
auto it=divs.begin();
// cout<<it->first<<" "<<it->second<<endl;
if(divs.size()==1){
    auto all=divs.begin();
    if(all->second<6){
        cout<<"NO"<<endl;
        return ;}
    cout<<"YES"<<endl;
    cout<<pow(all->first,1)<<" " <<pow(all->first,2)<<" "<<pow(all->first,all->second-3)<<endl;
    return;
}
else if(divs.size()==2){
    auto pehala=divs.begin();
    auto dusra=++divs.begin();
    if(pehala->second + dusra->second < 4){
        cout<<"NO"<<endl;
        return ;}
    cout<<"YES"<<endl;
    cout<<pehala->first<<" "<<dusra->first<<" "<<(ll)(pow(dusra->first,dusra->second-1)+1e-9)*(ll)(pow(pehala->first,pehala->second-1)+1e-9)<<endl;
    return ;
    }
    else{
        ll count = 0,power=1;
        for(auto it=divs.begin();it!=divs.end();it++){
            count+=it->second;
    }
    if(count<3){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    auto it1=divs.begin();
    auto it2=++divs.begin();
    ll third=n/(it1->first*it2->first);
    cout<<it1->first<<" "<<it2->first<<" "<<third<<endl;
}
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