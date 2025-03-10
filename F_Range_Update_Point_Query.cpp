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
ll sumofdigits(ll n){
    if(n/10ll==0)
    return n;
    return n%10ll+sumofdigits(n/10);
}

 void solve() {
ll n,q;
cin >> n >>q;
vector<ll>a(n);
for(int i=0;i<n;i++)
cin>>a[i];
vector<pair<ll,vector<ll>>>ans(n);
for(int i=0;i<n;i++){
    ans[i].first=-1;
    ans[i].second.resize(4);
    ans[i].second[0]=sumofdigits(a[i]);
    ans[i].second[1]=sumofdigits(ans[i].second[0]);
    ans[i].second[2]=sumofdigits(ans[i].second[1]);
    ans[i].second[3]=sumofdigits(ans[i].second[2]);
}
while(q--){
    int parity;
    cin>>parity;
    if(parity==1){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
      int index=l;
       if(ans[l].first<=3){//need to updated the range
       
          for(index =l;index<=r;index++){
            if(ans[index].first>10){
                break;
       }
       else{
           ans[index].first++;
       }
    }
       }
     
    //check the condition from opp side....
    for(int i=r;i>index;i--){
        if(ans[i].first>10){
            break;
        }
        else{
            ans[i].first++;
        }
    }
    }
    
    else{
        int index;
        cin>>index;
        index--;
        if(ans[index].first>3){
            cout<<ans[index].second[3]<<endl;
        }
        else if(ans[index].first==2){
        cout<<ans[index].second[2]<<endl;
        }
        else if(ans[index].first==1){
        cout<<ans[index].second[1]<<endl;
        }
        else if(ans[index].first==0){
        cout<<ans[index].second[0]<<endl;
        }
        else{
            cout<<a[index]<<endl;
        }
    }
   
    }

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