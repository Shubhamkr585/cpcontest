#include<bits/stdc++.h>
#define vec vector<ll>v
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
bool flag1=true,flag2=true;
ll count=0,maxi=0;
int fs=-1,ls=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        count++;
        maxi=max(maxi,count);
    }
    else count=0;
    if(s[i]=='0'){
        if(flag1){
        flag1=false;
        fs=i;
        }
        ls=i;
    }
}
if(s[0]=='1' && s[s.size()-1]){
    if(!flag1){
        count=fs+s.size()-1-ls;
        maxi=max(count,maxi);
    }
}
count=ceil(((maxi+1)/2.0))*(floor((maxi+1)/2.0));
cout<<count<<endl;
}
return 0;
}