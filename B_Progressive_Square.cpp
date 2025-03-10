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
ll n,c,d;
cin>>n>>c>>d;
ll size=n*n;
vec a(size);

for(int i=0;i<size;i++){
    cin>>a[i];
}
sort(all(a));
unordered_map<ll,ll>st;
ll sum=a[0];
for(int i=0;i<n;i++){
    if(i!=0)
    sum+=c;
    for(int j=0;j<n;j++){
     st[sum+j*d]++;
    }
}
bool flag=false;
for(int i=0;i<size;i++){
    if(st.find(a[i])==st.end()){
        flag=true;
        break;
    }
   st[a[i]]--;
}
if(flag) cout<<"NO"<<endl;
else{
for(auto it:st){
    if(it.second!=0){
        flag=true;
        break;
    }
}
if(flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
}
return 0;
}