#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
unsigned ll n,k;
cin>>n>>k;
unsigned ll i;
for( i=0;i<30;i++){
    unsigned ll b1=n&(1<<i);
    unsigned ll b2=k&(1<<i);
   if(b1!=b2)
    break;
}
cout<<(ll)(pow(2ll,i))<<endl;
}
return 0;
}