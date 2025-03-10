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
string s;
cin>>s;
ll ans=0,pos=0,i=0,count1=0,n=s.size();
while(i<n){
if(s[i]=='1'){
    count1++;
}
else{
    if(count1>0)
    ans+=count1+1;
}
i++;
}
cout<<ans<<endl;
}
return 0;
}