#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
//write the gcd function
int _gcd(int a,int b){
    if(b==0){
        return a;
    }
    return _gcd(b,a%b);
}
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
ll gcd1=0;
for(int i=0;i<n;i++){
    gcd1=(_gcd(gcd1,abs(a[i]-i-1)));
}
cout<<gcd1<<endl;
}
return 0;
}