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
vec a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}
vec change;
change.push_back(0);
change.push_back(1);
for (int i = 2; i <= n; i++) {
    if (a[i] != a[i-1]) {
        change.push_back(i);
    }
    else{
        change.push_back(change.back());
    }
}

int m;
cin>>m;
for(int i=0;i<m;i++){
    int l,r;
    cin>>l>>r;
   if(l==r){
    cout<<"-1 -1"<<endl;
   }
   else if(a[l]!=a[r]){
    cout<<l<<" "<<r<<endl;
   }
   else{
    int ind=lower_bound(change.begin(),change.end(),l+1)-change.begin();
    if(ind<=r){
        cout<<l<<" "<<ind<<endl;
    }
    else{
        cout<<-1<<" "<<-1<<endl;
    }
   }
}
cout<<endl;
}
return 0;
}