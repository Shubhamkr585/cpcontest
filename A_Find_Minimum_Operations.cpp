#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007

void solve(){
ll n=6492,k=10;
cin>>n>>k;
if(k==1)
{
    cout<<n<<endl;
    return;
}
ll rem=n,count=0;
while(rem!=0){
ll ans=(log(rem)/log(k));
ll p=(ceil(1.0*pow(k,ans)));
count++;
rem=rem-1ll*(p);
}
cout<<count<<endl;
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