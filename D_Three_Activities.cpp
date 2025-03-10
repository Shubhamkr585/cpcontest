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
vector<pair<ll,ll>> a(n),b(n),c(n);

for(int i=0;i<n;i++){
    cin>>a[i].first;
    a[i].second=i;
}
for(int i=0;i<n;i++){
    cin>>b[i].first;
    b[i].second=i;
}
for(int i=0;i<n;i++){
    cin>>c[i].first;
    c[i].second=i;
}
vector<int>p1(3),p2(3),p3(3);
sort(  a.begin(),a.end(),[](const pair<int,int>& a, const pair<int,int>& b) {
    return a.first > b.first;
});
sort(  b.begin(),b.end(),[](const pair<int,int>& a, const pair<int,int>& b) {
    return a.first > b.first;
});
sort(  c.begin(),c.end(),[](const pair<int,int>& a, const pair<int,int>& b) {
    return a.first > b.first;
});
for(int i=0;i<3;i++){
    p1[i]=a[i].second;
    p2[i]=b[i].second;
    p3[i]=c[i].second;
}
ll ans=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(p1[i]!=p2[j] && p1[i]!=p3[k] && p2[j]!=p3[k]){
                ans=max(ans,a[i].first+b[j].first+c[k].first);
            }
        }
}
}
cout<<ans<<endl;
}
return 0;
}