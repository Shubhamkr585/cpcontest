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
vec a(n);
string s;
cin>>s;
string temp=s;
unordered_set<string>st;
for(int i=0;i<n;i++){
    st.insert(s.substr(i));
    if(i+2<n){
    temp=s[i]+s.substr(i+2);
    st.insert(temp);
    }
}
cout<<st.size()<<endl;
}
return 0;
}