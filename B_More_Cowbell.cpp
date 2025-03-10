#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MAXSIZE 2000000
 void solve() {
ll n,k;
cin >> n >>k ;
vec a(n);
REP(i,n) cin >> a[i];

ll low=1,high=MAXSIZE,ans=high;
while(low<=high){
   ll mid=(low+high)/2;
   ll cnt=0;
   ll start=0,end=n-1;
   while(start<=end){

    if(a[end]+a[start]<=mid){
        cnt++;
        end--;
        start++;
    }
    else if(a[end]<=mid){
        cnt++;
        end--;     
   }
   else break;
}
if(start<=end || cnt>k)//not possible
low=mid+1;
else{
    ans=mid;
    high=mid-1;
}
   


}

cout<<ans<<endl;
 }
int main() {
    fastio;

solve();

    return 0;
}