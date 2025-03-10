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
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>a;
map<ll,ll>mp;
for(int i=0;i<n;i++)
{
    ll x;
    cin>>x;
    mp[x]++;
}for(auto it:mp){
    a.push_back({it.first,it.second});
}
ll count=a[0].second,max_count=a[0].second,i=1,j=0,distinct=1;
while(i<a.size()){
    if(a[i].first-a[j].first>1){
        i++;j++;
        distinct=1;
}
else{
    while(i<a.size() && a[i].first-a[j].first==1){
        distinct++;
    if(distinct>=k){
        count-=a[j].second;
        j++;
    }
    count+=a[i].second;
    max_count=max(max_count,count);
    i++;j=i-1;
    

}
}
}
cout<<max_count<<endl;
}
return 0;
}
// sort(a.begin(),a.end());
// ll distinct=1,count=1,max_count=1,i=1;
// while(i<n){
//     ll j=i;
//     while(j<n && a[j]-a[i]<=1){
//         if(a[j]-a[i]==1){
//             distinct++;
//             if(distinct>k){
//                 count=1;
//                 distinct=1;
//                 i=j+1;
//                 break;
//         }
//         else{
//             count++;
//             max_count=max(max_count,count);
//             j++;
//         }
//         }
//         else{
//         count++;
//         max_count=max(max_count,count);
//         j++;
//         }
//     }
//     if(distinct>k){
//         count=1;
//         distinct=1;
//     }
//     i++;
// }

// cout<<max_count<<endl;
#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    
    int ans = 0;
    
    for (int i = 0, j = 0; i < n; i++) {
        j = std::max(j, i);
        while (j + 1 < n && a[j + 1] <= a[j] + 1 && a[j + 1] < a[i] + k) {
            j++;
        }
        ans = std::max(ans, j - i + 1);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
