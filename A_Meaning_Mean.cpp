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
sort(all(a));
if(n==2){
cout<<(a[0]+a[1])/2<<endl;
continue;
}
stack <int> s;
s.push(a[0]);
int sum=0,maxi=a[n-1];

for(int i=1;i<n-1;i++){
    sum=s.top()+a[i];
    sum=sum/2;
    s.push(sum);
}
sum=(s.top()+a[n-1])/2;
cout<<sum<<endl;
}
return 0;
}