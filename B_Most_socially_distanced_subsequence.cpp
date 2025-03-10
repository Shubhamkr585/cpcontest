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
vec ans;
ans.push_back(a[0]);
for(int i=1;i<n-1;i++){
    //if either increasing or decreasing remove that element
    if(a[i]>a[i-1] && a[i+1]>a[i] || a[i]<a[i-1] && a[i]>a[i+1])
        continue;
    ans.push_back(a[i]);
}
ans.push_back(a[n-1]);
cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}