
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
if(n==1)
cout<<"1"<<endl;
else{
if(n&1)
{
cout<<"-1"<<endl;
continue;
}
for (int i = 0; i < n; ++i) {
if (i % 2) {
cout << i << " ";
} else {
cout << n - i << " ";
}
}
cout << "\n";
}
}
return 0;
}