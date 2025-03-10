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
vector<string>s(2);
cin>>s[0]>>s[1];
ll ans=0;
for(int i=1;i<n-1;i++){
    bool flag=true;
    //checking the conditions
    flag&=s[0][i]=='.' && s[1][i]=='.';
    flag&=s[0][i-1]== s[0][i+1];
    flag&=s[0][i+1]!= s[1][i+1];
    flag&=s[0][i-1]!= s[1][i-1];
    ans+=flag;
}
cout<<ans<<endl;
}
return 0;
}