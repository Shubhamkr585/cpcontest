#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {

        size_t hash1 = hash<T1>{}(p.first);
        size_t hash2 = hash<T2>{}(p.second);
        return hash1
               ^ (hash2 + 0x9e3779b9 + (hash1 << 6)
                  + (hash1 >> 2));
    }
};

int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
int n,x,y,count=0;
cin>>n>>x>>y;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
unordered_map<pair<int ,int>,ll,hash_pair>cnt;
 ll ans = 0;
    
    for (int e : a) {
        int xx = e % x;
        int yy = e % y;
        ans += cnt[{(x - xx) % x, yy}];
        cnt[{xx, yy}]++;
    }
    
    cout << ans << endl;
}
return 0;
}