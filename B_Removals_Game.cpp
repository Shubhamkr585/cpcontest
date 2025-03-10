#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
bool palindrome(vec & a,vec & b){
 for(int i=0,j=a.size()-1;i<a.size(),j>=0;i++,j--){
    if(a[i]!=b[j])
    return false;
 }
 return true;
}
bool same(vec & a,vec & b){
    bool flag=true;
    for(int i=0;i<a.size();i++){
    if(a[i]!=b[i]){
        flag=false;
        break;
    }
    }
   return flag;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
vec a(n);
vec b(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
if(palindrome(a,b) || same(a,b))  cout<<"Bob"<<endl;
else
cout<<"Alice"<<endl;
}
return 0;
}