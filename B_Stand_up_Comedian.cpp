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
ll a,b,c,d;
cin>>a>>b>>c>>d;
ll total=a;
ll alice =a,bob=a;
while(alice >0 ||bob>0 && b>=0 && c>=0){
if(alice<bob){
    //tell the joke alice like
b-=c;
total+=c;
}
}
}
return 0;
}