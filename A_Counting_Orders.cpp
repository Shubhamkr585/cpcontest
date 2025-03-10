#include<bits/stdc++.h>
#define vec vector<ll>v
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>a(n);
vector<int>b(n);
vector<int>c(n,0);
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
    cin>>b[i];
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int ptr=0;
for(int i=0;i<n&&ptr<n;i++){
if(a[ptr]>b[i]){
    c[ptr]++;
}
else{
    if(ptr+1<n){
        c[ptr+1]=c[ptr]-1;
    }
    ptr++;
    i--;
}
}
if(ptr==n){
    c[n-1];
}else{
int cnt=c[ptr];
for(int i=ptr+1;i<n;i++){
c[i]=--cnt;
}
}

ll val=1;
for(int i=0;i<n;i++){
    val=((val%mod)*(1ll*c[i])%mod)%mod;
}
cout<<val<<endl;
}
return 0;
}