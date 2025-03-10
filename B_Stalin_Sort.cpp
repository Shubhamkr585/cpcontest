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
    cout<<0<<endl;
    continue;
}
unordered_set<ll>st;
ll ans=n-1,val=a[0];
    for (int i = 0; i < n; i++) {
        ll res = 0;
        for (int j = 0; j < n; j++) {
            if (j < i || a[j] > a[i]) {
                res++;
            }
        }
        ans=min(ans,res);
}
cout<<ans<<endl;
}
return 0;
}