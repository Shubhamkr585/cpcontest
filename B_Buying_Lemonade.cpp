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
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(all(a));
ll sub=0,count=0;
ll num=n;
for(int i=0;i<n;i++){
    if((a[i]-sub)*num>=k){
        count+=k;
        break;
    }
    else{
        count=count+(a[i]-sub)*num+1;
        k-=(a[i]-sub)*num;
        sub=max(sub,a[i]);
        num--;
        
    }
}
cout<<count<<endl;

}
return 0;
}