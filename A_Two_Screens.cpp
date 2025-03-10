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
string s,t;
cin>>s>>t;
int n=s.size(),m=t.size(),len=0;
n=min(n,m);
int i=0,ans;
for(int i=0;i<n;i++)
{
    if(s[i]!=t[i])
    break;
    else
    len++;
}
if(len>=1)
ans=s.size()+t.size()-len+1;
else
ans=s.size()+t.size();
cout<<ans<<endl;
}
return 0;
}