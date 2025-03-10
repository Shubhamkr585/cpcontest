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
ll n=4;
cin>>n;
vec a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
sort(a.begin(),a.end());

int x=unique(a.begin(), a.end()) - a.begin();
ll i,j=0,maxi=1;

for(i=1;i<x;i++){
while(a[i]-a[j]>=n){
    j++;
}
maxi=max(maxi,i-j+1);
}
maxi=max(maxi,i-j);
cout<<maxi<<endl;
}
return 0;
}