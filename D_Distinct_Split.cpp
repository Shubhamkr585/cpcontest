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
int n;
cin>>n;
string s;
cin>>s;
ll maxi=0;
vec cnt1(26,0),cnt2(26,0);
for(auto i:s){
    cnt1[i-'a']++;
}
for(int i=0;i<n;i++){
  cnt1[s[i]-'a']--;
  cnt2[s[i]-'a']++;
  ll curr=0;
  for(int j=0;j<26;j++){
    curr+=min(1ll,cnt1[j])+min(1ll,cnt2[j]);
}
maxi=max(maxi,curr);
}
cout<<maxi<<endl;
}
return 0;
}