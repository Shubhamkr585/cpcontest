#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define all(x) x.begin(), x.end()
#define REP(i,N) for (int i = 0; i < (N); i++)
#define ll long long
#define endl '\n'
#define vec vector<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isPerfectSquare(ll S) {
    if(S < 0)
        return false;
    long long root = (long long) floor(sqrt((long double) S));
    return root * root == S;
}

void solve() {
    ll n;
    cin >> n;
    ll S = n * (n + 1) / 2;
    if(isPerfectSquare(S)){
        cout << -1 << "\n";
        return;
    }
    
    vec ans;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vec st;
    for(ll i = 1; i * i <= S; i++){
        st.push_back(i * i);
    }
    for(ll i = 1; i <= n; i++){
        pq.push(i);
    }

    ll sum = 0, curr = st[0], ptr = 0;
    while(!pq.empty()){
        if(pq.size() == 1){
            ans.push_back(pq.top());
            pq.pop();
            break;
        }
        ll x = pq.top();
        pq.pop();
        if(sum + x == curr){
            ll ele = pq.top();
            pq.pop();
            ans.push_back(ele);
            sum += ele;
            pq.push(x);
            if(ptr + 1 < st.size()){
                curr = st[++ptr];
            }
        }
        else if(sum + x < curr){
            ans.push_back(x);
            sum += x;
        }
        else{
            if(ptr + 1 < st.size()){
                curr = st[++ptr];
            }
            ans.push_back(x);
            sum += x;
        }
    }
   
    for(auto a : ans){
        cout << a << " ";
    }
    cout << endl;
}

int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
