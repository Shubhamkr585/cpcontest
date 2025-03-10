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
int c=1,j=0,i;
bool flag=false;
for(i=1;i<s.size();i++){
    if(s[i]!=s[j]){
        c++;
        j=i;
    }
    if(!flag && s[i-1]=='0' && s[i]=='1'){
        flag=true;
    }
}
if(flag)
c--;
cout<<c<<endl;
}
return 0;
}