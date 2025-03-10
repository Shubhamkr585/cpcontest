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
ll n=6;
cin>>n;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];}
ll i=0,j=n-1,c1=1,c2=1,sum1=a[0],sum2=a[j],total=0;

while(i<j){
    if(sum1==sum2){
        total=c1+c2;
        sum1+=a[++i];
        sum2+=a[--j];
        c1++;
        c2++;
    }
else if(sum1<sum2){
    i++;
    sum1+=a[i];
    c1++;
}
else{
    j--;
    sum2+=a[j];
    c2++;
}
}

cout<<total<<endl;
}
return 0;
}