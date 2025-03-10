#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

int main(){
    fastio;
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<tuple<int, int, ll>> ops(m);
    for (int i = 0; i < m; i++){
        int l, r;
        ll d;
        cin >> l >> r >> d;
        l--; r--;
        ops[i] = make_tuple(l, r, d);
    }
    
    vector<ll> opCount(m, 0);
    for (int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        x--; y--; 
        opCount[x] += 1;
        if(y+1 < m) {
            opCount[y+1] -= 1;
        }
    }
    ///frequency dega ye
    for (int i = 1; i < m; i++){
        opCount[i] += opCount[i-1];
    }
    
    
    vector<ll> diff(n, 0);
    for (int i = 0; i < m; i++){
        int l, r;
        ll d;
        tie(l, r, d) = ops[i];
        ll times = opCount[i]; 
        if(times != 0){
            diff[l] += times * d;
            if(r + 1 < n)
                diff[r+1] -= times * d;
        }
    }
    
    ll currentAdd = 0;
    for (int i = 0; i < n; i++){
        currentAdd += diff[i];
        a[i] += currentAdd;
    }
    
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
