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
string s;
cin>>s;
ll arr[26]={0};
for(int i=0;i<n;i++){
    arr[s[i]-'a']++;
}
ll ans=0;
for(int i=0;i<26;i++){
    ans=max(ans,arr[i]);
}
if(n>=2*ans){
    if(n%2==0)
    cout<<"0"<<endl;
    else
    cout<<"1"<<endl;
}
else{
    cout<<2*ans-n<<endl;
}
}
return 0;
}