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
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='0')
    count++;
}
if(count%2==0 || count==1)
cout<<"BOB"<<endl;
else
cout<<"ALICE"<<endl;
}

return 0;
}