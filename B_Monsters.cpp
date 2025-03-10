#include<bits/stdc++.h>
using namespace std;
#define vec vector<ll>
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>a(n+1);
for(int i=1;i<=n;i++){
ll f;
cin>>f;
f=f%k;
a[i]=make_pair(f,i);
}
 sort(a.begin()+1, a.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;  // Compare by second member if first are equal
        }
        else if(a.first!=0 && b.first!=0)
        return a.first > b.first;
        else return a.first<b.first;
    });
for(int i=1;i<=n;i++)
cout<<a[i].second<<" ";
cout<<endl;

}
return 0;
}