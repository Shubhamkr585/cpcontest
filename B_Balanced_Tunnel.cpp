#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
ll n;
cin>>n;
queue<ll>q1;
queue<ll>q2;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    q1.push(x);
}
for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    q2.push(x);
}
unordered_set<ll>s;
ll ans=0;
while(!q1.empty() && !q2.empty()){
   if(s.find(q1.front())!=s.end()){
       q1.pop();
   }
   else if(q1.front()==q2.front()){
       s.insert(q2.front());
       q1.pop();
       q2.pop();
   }
   else{
    s.insert(q2.front());
    q2.pop();ans++;
   }
}
cout<<ans<<endl;
return 0;
}