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
ll n;
cin>>n;
ll ans=0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){ ans=n/i;break;}
}
if(ans==0)
cout<<"1"<<" "<<n-1<<endl;
else
cout<<ans<<" "<<n-ans<<endl;

}
return 0;
}