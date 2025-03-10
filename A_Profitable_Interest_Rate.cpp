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
if(n>=x){
    cout<<n<<endl;
}
else{
    if(x-n>n)
    cout<<"0"<<endl;
    else
    cout<<n-(x-n)<<endl;
}
}
return 0;
}