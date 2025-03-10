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
vec a(n+1,0);
vec pos(n+1);
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
cin>>pos[i];
vec fpos(n+1,0);
for(int i=1;i<=n;i++){
    fpos[abs(pos[i])]+=a[i];
}

ll left=0;
bool flag=true;
for(int i=1;i<=n;i++){
left+=k;
if(left<fpos[i]){
    flag=false;
    break;
}
left-=fpos[i];
}
cout<<((flag)?"YES\n":"NO\n");
}
return 0;
}