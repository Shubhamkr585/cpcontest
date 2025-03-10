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
ll n,c;
cin>>n>>c;
vec a(n+1);
vec b(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
    b[i]=a[i]+i;
}
sort(b.begin()+1,b.end());
ll count=0;
for(int i=1;i<=n;i++){
    if(b[i]<=c){
        count++;
        c-=b[i];
    }
    else
    break;
}
cout<<count<<endl;
}
return 0;
}