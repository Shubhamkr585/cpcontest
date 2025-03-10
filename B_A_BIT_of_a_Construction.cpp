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
ll n,k;
cin>>n>>k;
if(n==1){
    cout<<k<<endl;
    continue;
}
vec ans;
ll p=(ll)(log2(k+0.0001));
p=(ll)(pow(2ll,p)+0.001)-1;
ans.push_back(p);
k=k-p;
ans.push_back(k);n-=2;
cout<<p<<" "<<k<<" ";
for(int i=0;i<n;i++)
cout<<"0 ";
cout<<endl;
}
return 0;
}