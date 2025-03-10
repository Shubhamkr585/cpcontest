#include<bits/stdc++.h>
using namespace std;
const int maxv = 1000000;
#define ll long long
#define MOD 1000000007
#define vec vector<ll>
#define pb push_back


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
int main()
{
   int t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       map<ll,ll>divs;
       for(ll i=0;i<n;i++){
           ll x;
           cin>>x;
           add_divs(x,divs);
       }
       bool flag = true;
    auto all=divs.begin();
    for(auto it=divs.begin();it!=divs.end();it++){
        if(it->second%n!=0){
            flag = false;
            break;
        }
    }
    if(!flag)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
   }
    return 0;
}
