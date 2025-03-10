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
ll n,maxi=1;
cin >> n;
vec freq(11,0),a(n);
for(int i=0;i<n;i++) {
    cin >> a[i];
}

for(int i=0;i<n;i++) {
    freq[a[i]]++;
    // cout<<freq[1]<<"  "<<freq[2]<<endl;
   
    for(int j=1;j<=10;j++) {
        if(!freq[j]) continue;
         
        ll store= freq[j];//remove one element from the search set
        freq[j]--;
         bool yes = true;
         vec temp=freq;
         sort(temp.begin()+1,temp.end(),greater<int>());
         int index=2;
         while(index<=10){
             if(temp[index]==0){
                break;
         }
         else if(temp[index]!=temp[index-1]){
                      yes=false;
                      break;
         }
         index++;
        }
        freq[j]=store;
        if(yes){
            maxi=i+1ll;
            break;
        }
      
    }
 
}

cout<<maxi<<endl;



}
int main() {
    fastio;
    
solve();
    
    return 0;
}