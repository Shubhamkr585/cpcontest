#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define mod 1000000007
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
ll value=n;
for(int i=1;i<k;i++){
value*=n;
value%=mod;
}
cout<<value%mod<<endl;
}
return 0;
}