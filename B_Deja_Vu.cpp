#include<bits/stdc++.h>
using namespace std;
#define vec vector<ll>
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
int n,q;
cin>>n>>q;
vec a(n);
vec x(q);
vec count(n,0);
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<q;i++){
    cin>>x[i];
}
for(int i=0;i<n;i++){
    ll value=a[i];
while(a[i]%2==0){
    a[i]/=2;
    count[i]++;
}
}
for(int i=0;i<q;i++){
    for(int j=0;j<n;j++){
    if(count[j]>=x[i]){
    a[j]=a[j] + (1<<(x[i]-1));
    count[j]=x[i]-1;

    }
    }       
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
return 0;
}