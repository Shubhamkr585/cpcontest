#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m; 
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll X;
        cin >> X;
        
       
        if(n == 1){
            cout << "YES\n";
            continue;
        }
       
        bool dp0 = true, dp1 = true;
        
  
        for (int i = 0; i < n - 1; i++){
            bool new0 = false, new1 = false;
            
            ll nxt = a[i];      
            ll ct = X - a[i];
            
            ll nn = a[i+1];      
            ll nt = X - a[i+1];        
            
            if(dp0){
               
                if(nxt <= nn)
                    new0 = true;
               
                if(nxt <= nt)
                    new1 = true;
            }
            
        
            if(dp1){
               
                if(ct <= nn)
                    new0 = true;
              
                if(ct <= nt)
                    new1 = true;
            }
            
            dp0 = new0;
            dp1 = new1;
            
            if(!dp0 && !dp1)
                break;
        }
        
        cout << ((dp0 || dp1) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
