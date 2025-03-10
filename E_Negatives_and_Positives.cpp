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
ll n,mini=INT_MAX,count=0,sum=0;
cin>>n;
vec a(n);
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]<0){
    count++;
}
sum+=abs(a[i]);
    mini=min(mini,abs(a[i]));
}
if(count%2==0)
cout<<sum<<endl;
else
{
    sum=sum-2*mini;
    cout<<sum<<endl;
}
}
return 0;
}