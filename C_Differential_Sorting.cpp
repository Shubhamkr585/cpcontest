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
bool flag=true;
for(ll i=0;i<n-1;i++){
if(a[i]>a[i+1]){
flag=false;
break;
}
}
if(flag){
cout<<"0"<<endl;
continue;
}
if(a[n-1]<a[n-2] || a[n-1]<0 && a[n-2]<0){
    cout<<"-1"<<endl;
    continue;
}
cout<<n-2<<endl;
for(int i=0;i<n-2;i++)
    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
}
return 0;
}