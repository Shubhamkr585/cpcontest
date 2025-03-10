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
 void solve() {
ll n,k,cnt=0;
cin >> n >>k;
vec a(n);
for(auto &i : a) {cin >> i ;cnt+=i%2==1;}
if(cnt<k ||   cnt%2!=k%2){ 
    cout<<"NO\n";
    return;
}
cout<<"YES\n";
if(k==1){
    
    cout<<n<<endl;
    return;
}
vec ans;
int index=0,stop=k-1;
while(true){
    if(a[index]%2==1){
        cnt--;
        if(cnt==stop){
            index++;
            ans.push_back(index);
            break;
        }
        }
        index++;
}
while(index<n){
if(a[index]%2==1){
    ans.push_back(index+1);
}
index++;
}
ans[k-1]=n;
for(int i=0;i<k;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

}
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}