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
string ans="";
for(int i=0;i<n-1;i++){
    ans.push_back('0');
}
ans.push_back('1');
cout<<ans<<endl;
}
return 0;
}