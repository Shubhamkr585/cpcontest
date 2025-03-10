#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
unordered_set<ll>s;
for(int i=2;i<1000;i++){
    ll value=1+i+i*i;
    ll j=i*i;
    while(true){
        s.insert(value);
        j=j*i;
        value+=j;
        if(value>1000000)  break;
    }
}
while(t--){
ll n;
cin>>n;
if(s.find(n)!=s.end()){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}