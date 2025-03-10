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
ll mini=0,coins=0,j=0;
ll reqtillnow=0,c=0;
for(int i=0;i<n;i++){
     if(a[i]<mini){
         reqtillnow+=mini-a[i]-c;
         c++;
     }
     else{
        mini=a[i];
     }
}

coins=reqtillnow+c;
cout<<coins<<endl;
}
return 0;
}