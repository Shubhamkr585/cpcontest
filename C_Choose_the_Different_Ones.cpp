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
ll n,m,k;
cin>>n>>m>>k;
vec a(n),b(m);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++)
cin>>b[i];
vec ans;
ll c1=0,c2=0;

sort(all(a));
sort(all(b));
if(1<=a[0] && a[0]<=k)
c1++;
if(1<=b[0] && b[0]<=k)
c2++;
for(int i=0;i<n;i++)
{
    if( 1<=a[i] && a[i]<=k)
    {
        if(i-1>=0 && a[i]!=a[i-1])
        c1++;
        ans.push_back(a[i]);
    }
}
for(int i=0;i<m;i++)
{
    if(1<=b[i] && b[i]<=k)
    {
        if(i-1>=0 && b[i]!=b[i-1])
        c2++;
        ans.push_back(b[i]);
    }
}
sort(all(ans));

if(c1<k/2 || c2<k/2){
    cout<<"NO"<<endl;
    continue;
}

    int i=0;
    int c=1;
    for( i=0;i<ans.size();i++){
        if(ans[i]==c)
        {
         c++;
        }
    }
    if(c>k && ans[0]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
return 0;
}