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
ll n,m;
cin >> n>>m;
vector<vector<ll>>depth(n,vector<ll>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>depth[i][j];
    }
}
queue<pair<int,int>>q;
vector<vector<int>>vis(n,vector<int>(m,0));
ll ans=0;
int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j] && depth[i][j]){
            q.push({i,j});
            vis[i][j]=1;
            ll sum=0;
            while(!q.empty()){
                auto node=q.front();
                q.pop();
                int row=node.first;
                int col=node.second;
                sum+=depth[row][col];
             for(int i=0;i<4;i++){
                 int nrow=row+dr[i];
                 int ncol=col+dc[i];
                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && depth[nrow][ncol]){
                     q.push({nrow,ncol});
                     vis[nrow][ncol]=1;
                 }
             }
            }
            ans=max(ans,sum);
        }
           
    }
    
}
cout<<ans<<endl;
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