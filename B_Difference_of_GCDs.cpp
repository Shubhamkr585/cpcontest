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
ll n,l,r;
cin>>n>>l>>r;
bool flag=true;
for(ll i=1;i<=n;i++){
    ll temp=floor((l-1)/i +1)*i;
    if(temp>r)
    {
        flag=false;
        break;
    }
}
if(flag)
{
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        ll temp=((l-1)/i +1)*i;
    cout<<temp<<" ";
    }
    cout<<endl;
}
else
cout<<"NO"<<endl;
}
return 0;
}