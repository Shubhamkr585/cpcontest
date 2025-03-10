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
vector<vector<int>>a(n,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)    
    cin>>a[i][j];
}
int m1=0,m2=0,m3=0,sum1=0,sum2=0;
for(int i=0;i<n;i++){
    if(a[i][i]<0){
        m1=max(m1,abs(a[i][i]));
    }
}
for(int j=1;j<n;j++){
    int col=0;
for(int i=j;i<n;i++){
    if(a[i][col]<0)
    m2=max(m2,abs(a[i][col]));
    col++;
}
sum1+=m2;
m2=0;
}
for(int j=1;j<n;j++){
    int row=0;
for(int i=j;i<n;i++){
    if(a[row][i]<0)
    m3=max(m3,abs(a[row][i]));
    row++;
}
sum2+=m3;
m3=0;
}
int ans=m1+sum1+sum2;
cout<<ans<<endl;
}
return 0;
}