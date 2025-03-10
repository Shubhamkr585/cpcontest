#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
ll largest_divisor(ll n,ll k){
   ll maxi=0; 
 for(ll i=1;i*i<=n;i++){
    if(n%i==0){
        if(i<=k)
        maxi=max(maxi,i);
        if(n/i<=k)
        maxi=max(maxi,n/i);
    }
 }
 return maxi;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll div=largest_divisor(n,k);
cout<<n/div<<endl;

}
return 0;
}