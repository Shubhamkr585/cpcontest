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
for(int i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end());
ll max_odd,even_count=0,max_even;
for(int i=0;i<n;i++){
    if(a[i]%2==0){
    even_count++;
    max_even=a[i];
    }
    else
    max_odd=a[i];
}
if(even_count==n || even_count==0){
    cout<<0<<endl;
    continue;
}
int i;
for(i=0;i<n;i++){
if(a[i]%2==0){
    if(max_odd<a[i]){
        break;
}
else
max_odd+=a[i];

}
}
cout<<(i==n?even_count:even_count+1)<<endl;
}
return 0;
}