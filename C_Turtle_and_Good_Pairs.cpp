
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
vec mp(26,0);
for(int i=0;i<n;i++){
    mp[s[i]-'a']++;
}
string ans="";
while(n>0){
    for(int j=0;j<26;j++){
        if(mp[j]>0){
          n--;
          ans+=char(j+'a');
          mp[j]--;
        }
}
}
cout<<ans<<endl;
}
return 0;
}