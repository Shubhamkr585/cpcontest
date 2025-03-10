#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    const int M = 1000000;
    vector<int> A(N);
    vector<int> freq(M+1, 0);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        freq[A[i]]++;
    }
    vector<int> cnt(M+1, 0);
    for (int d = 1; d <= M; d++){
        for (int m = d; m <= M; m += d){
            cnt[d] += freq[m];
        }
    }
    vector<int> ans(M+1, 0);
    for (int d = M; d >= 1; d--){
        if (cnt[d] >= K){  
            for (int m = d; m <= M; m += d){
                if (ans[m] == 0) {
                    ans[m] = d;
                }
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << ans[A[i]] << "\n";
    }
    
    return 0;
}
