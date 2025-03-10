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
int n;
cin>>n;
vec a(n+1);
vec b(n+1);
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
cin>>b[i];
ll pos=-1,maxi=0,l=-1,r=-1;
bool flag=false;
for(int i=1;i<=n;i++){
if(a[i]>=b[i]){
ll pos=i;
flag=false;
while(i+1<=n && b[i]<=b[i+1]){
flag=flag || (a[i]>a[i+1]);
i++;

}
if((i-pos>maxi || i-pos==maxi && a[pos]>b[pos])&& flag){
    maxi=i-pos;
    l=pos;
    r=i;
}
}
}

cout<<l<<" "<<r<<endl;
}
return 0;
}