
#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(vec &a){
    ll n;
    cin>>n;
    ll index=log2(n);
    cout<<"31"<<endl;
    vec b(32,0);
    for(int i=index;i>=0;i--){
        if(n>=a[i]){
            b[i]=1;
            n-=a[i];
    }
    else
    b[i]=0;
    }
    for(int i=0;i<31;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
vec a(32);
for(ll i=0;i<32;i++)
a[i]=pow(2,i);
solve(a);
}
return 0;
}