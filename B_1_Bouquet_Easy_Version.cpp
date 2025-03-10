#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
    ll n=11,k=13;
cin>>n>>k;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(all(a));
if(k==1){
    binary_search(all(a),1)?cout<<"1\n":cout<<"0\n";
    return;
}
ll j=0,sum=0,maxi=0;
for(int i=0;i<n && j<n;){
    if(sum +a[j]>k ){
        sum-=a[i];
    i++;
    }
      if(j==n)
      break;
    while(j<n && a[j]-a[i]<=1ll && sum+a[j]<=k){
         sum+=a[j];
         maxi=max(maxi,sum);
          j++;
    }
     j=max(j,i+1ll);

    while(j<n && a[j]-a[i]>1ll){
        sum-=a[i];
        i++;
    }
  
}
cout<<maxi<<endl;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}