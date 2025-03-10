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
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(all(a));
bool f=false;
if(a[0]!=a[1]){
    f=true;
}
else{
    for(int i=1;i<n;i++){
        if(a[i]%a[0]!=0)
        {
            f=true;
            break;
        }
}
}
cout<<(f?"YES":"NO")<<endl;
}
return 0;
}