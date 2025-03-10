#include <bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        bool check=true;
        ll prev=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]>=prev)
            prev=a[i];
            else
            check=false;
        }
        if(check){
            cout<<"YES"<<endl;
            continue;
        }
        int digit=0;
        bool flag=true;
        for (int i = 0; i < n; i++) {
           if(a[i]/10 == 0){
            if(a[i]%10<digit){
                flag=false;
                break;
            }
            digit=a[i]%10;
           }
           else{
            int f=a[i]%10;
            int s=a[i]/10;
            if(s<digit){
                flag=false;
                break;
            }
            digit=s;
            if(f<digit){
                flag=false;
                break;
            }
            digit=f;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
