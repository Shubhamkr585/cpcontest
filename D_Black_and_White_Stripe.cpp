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
ll n=5,k=1;
cin>>n>>k;
string s;
cin>>s;
ll i=0,lw=-1,count=0,mini=INT64_MAX,j=0;
//sliding window approacH
for(i=0;i<k;i++){
    if(s[i]=='W')
    count++;
}
i=k;
mini=count;
while(i<n){
    if(s[i]=='W')
    count++;
    if(s[j]=='W')
    count--;
    mini=min(mini,count);
    j++;
    i++;
}

cout<<mini<<endl;

}
return 0;
}