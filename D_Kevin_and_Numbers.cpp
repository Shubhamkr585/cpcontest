#include <bits/stdc++.h>
using namespace std;
#define aint(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)

#define endl '\n'
#define vec vector<int>
// #define map map<int,int>
#define us unordered_set<int>
// #define fastio ios_base::sync_with_stdio(false); cin.tie(nuintptr); cout.tie(nuintptr);
 void solve() {
int n,m;
cin >> n>>m;

priority_queue<int>pq;
map<int,int> mp;
int elecnt=n;
for(int i=0;i<n;i++) {int x; cin>>x;mp[x]++;}
for(int i=0;i<m;i++){ int x; cin>>x;
if(mp[x]>0){
    mp[x]--;
    continue;
    elecnt--;
}
pq.push(x);}

int cnt=n-m;
while( !pq.empty() && cnt!=0){
    if(pq.size()>elecnt){
         cout<<"No"<<endl;
        return;
    }
    int x=pq.top();pq.pop();

    int split1=(x+1)/2;
    int split2=x-split1;
    if(mp[split1]>0 || mp[split2]>0){
        cnt--;
    }
    if(mp[split1]>0){
        mp[split1]--;  
        elecnt--;      
}
else{
    pq.push(split1);
}
if(mp[split2]>0){
    mp[split2]--;
    elecnt--;
    
}
else{
    pq.push(split2);
}

}
while(!pq.empty()){
    if(mp[pq.top()]>0){
        mp[pq.top()]--; 
    }
     pq.pop();
}
for(auto it:mp){
    if(it.second>0){
        cout<<"No"<<endl;
        return;
    }
}
cout<<"Yes"<<endl;



}
int main() {
    // fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}