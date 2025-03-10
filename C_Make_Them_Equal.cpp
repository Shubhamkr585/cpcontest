#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
bool possibility(int i,string &s,char ch){
    int n=s.size();
    for(int j=1;(j*i)<=n;j++){
         if(s[j*i-1]!=ch){
            return false;
    }
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
    int n;
string s;
char c;
cin>>n>>c;
cin>>s;
bool flag=true;
for(int i=0;i<n;i++){
if(s[i]!=c){
{
    flag=false;
    break;
}
}
}
if(flag){
    cout<<"0"<<endl;
    continue;
}
int i;
bool apna=false;
for( i=2;i<=n;i++){
    if(possibility(i,s,c)){
        flag=true;
        break;
    }
}
if(flag){
    cout<<"1"<<endl; 
    cout<<i<<endl;  
    continue;
}
cout<<"2"<<endl;
cout<<n-1<<" "<<n<<endl;
}
return 0;
}