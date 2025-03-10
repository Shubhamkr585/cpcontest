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
if(s[0]=='1'  || s[n-1]=='1'){
cout<<"YES\n";
continue;
}
string ans="";
bool two=false;
for(int i=1;i<n-1;i++){
  if(s[i]=='1' && s[i+1]=='1'){
    two=true;
    break;
  }
}
cout<<(two?"YES\n":"NO\n");
}  
return 0;
}