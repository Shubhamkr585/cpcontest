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
ll n,x;
cin>>n>>x;
vec a(n);
ll sum=0,maxi=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    maxi=max(maxi,a[i]);
}
sum=(ceil(1.0*sum/x));
maxi=max(maxi,sum);
cout<<maxi<<endl;

}
return 0;
}