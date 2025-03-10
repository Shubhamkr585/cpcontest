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
vec a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
if(n==1){
cout<<"1"<<endl;
continue;
}
sort(all(a));
ll gcd=abs(a[1]-a[0]);
for(int i=2;i<n;i++){
gcd=__gcd(gcd,abs(a[i]-a[i-1]));
}
ll naya=a[n-1]+gcd;
ll sum=0;
for(int i=0;i<n;i++)
sum+=(naya-a[i])/gcd;
cout<<sum<<endl;
}
return 0;
}