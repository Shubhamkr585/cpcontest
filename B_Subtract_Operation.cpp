#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
    ll n,k;
cin>>n>>k;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(all(a));
ll i=0,j=1;
while(i<n && j<n){
    if(a[j]-a[i]==k)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(a[j]-a[i]>k)
    i++;
    else
    j++;
}
cout<<"NO"<<endl;
}
int main(){
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}





#include <iostream>
#include <vector>
#include <algorithm>
#define int long long int 
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, W;
    cin >> N >> W;
    
    vector<int> X(N), Y(N);
    vector<vector<pair<int, int>>> blocks(W + 1);
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        blocks[X[i]].emplace_back(Y[i], i);
    }
    
    vector<int> cnt(N, 0);
    vector<int> disappear(N + 1ll, -1);
    
    for (int x = 1; x <= W; x++) {
        sort(blocks[x].begin(), blocks[x].end());
        
        for (int j = 0; j <(int) blocks[x].size(); j++) {
            int y = blocks[x][j].first;
            int i = blocks[x][j].second;
            cnt[i] = j;
            disappear[j] = max(disappear[j], y);
        }
        disappear[(int)blocks[x].size()] = 10000000000ll;
    }
    
    for (int i = 0; i < N; i++) {
        disappear[i + 1] = max(disappear[i + 1], disappear[i] + 1);
    }
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int T, A;
        cin >> T >> A;
        A--;
        cout << (T < disappear[cnt[A]] ? "Yes" : "No") << "\n";
    }
    
    return 0;
}


