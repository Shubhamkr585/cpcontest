#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
// cin>>t;
while(t--){
string s="aba";
// cin>>s;
ll n=s.length();
bool flag=true;
vec cnt(26,0);
for(auto x:s){
    cnt[x-'a']++;

for(int i=0;i<25;i++){
    for(int j=i+1;j<26;j++){
    if(abs(cnt[i]-cnt[j])>1){
        flag=false;
        break;
    }
}
}
}
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}