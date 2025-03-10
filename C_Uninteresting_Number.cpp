#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
  string s;
  cin>>s;
ll sum=0,count2=0,count3=0;
for(int i=0;i<s.length();i++){
    ll d=s[i]-'0';
    if(d==2)
    count2++;
    if(d==3)
    count3++;
    sum+=d;
}
ll r=sum%9;
if(r==0)
cout<<"YES"<<endl;
else if(r==1){
    if(count3>=1 && count2>=1 || count2>=4 || count3>=4 && count2>=1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
else if(r==2){
    if(count3>=2 && count2>=2 || count2>=8 || count3==1 && count2>=5)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else if(r==3){
    if(count3>=1 || count2>=3)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else if(r==4){
    if(count2>=7 || count3>=2 && count2>=1 || count3==1 && count2>=4 )
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else if(r==5){
if(count2>=2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else if(r==6){
    if(count3>=2 || count2>=6 || count2>=3 && count3==1)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
}
else if(r==7){
    if(count2>=1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
else{
    if(count2>=5 || count3>=1 && count2>=2 || count3>=4 && count2>=2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
 }
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}