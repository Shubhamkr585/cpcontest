#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define map map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 ll solve(int index,int n,int prev,vector<vector<ll>>& dp,vector<ll>& nums){
        if(index==n)
            return 0;
        if(dp[index][prev+1]!=-1 )  return dp[index][prev+1];
        // not take 
        ll nottake=0+solve(index+1,n,prev,dp,nums);
        ll take=0;
        if(prev==-1 || nums[index]<=nums[prev])
            take=1+solve(index+1,n,index,dp,nums);
        return dp[index][prev+1]=max(take,nottake);
    }
    ll lengthOfLIS(vector<ll>& nums) {
        ll n=nums.size();
        vector<vector<ll>>dp(n,vector<ll>(n+1,-1));
        return solve(0,n,-1,dp,nums);
    }
 void solve() {
ll n;
cin >> n;
vec a(n);
for(auto & i:a)
    cin>>i;
    cout<<max(n-lengthOfLIS(a)-1,0ll)<<endl;
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