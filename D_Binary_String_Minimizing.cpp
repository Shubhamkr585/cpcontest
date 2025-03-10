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
ll n,k;
cin >> n >> k;
string s;
cin >> s;
ll cnt1=0,cnt0=0,indextoswap=0,i=0;

while(i<n){
    if( s[i]=='0' ){
        if(cnt1>0){
            if(k>cnt1){
                
                swap(s[i],s[i-cnt1]);
                k-=cnt1;
        }
        else{
            if(i-k>=0)
            swap(s[i],s[i-k]);
            k=0;
            break;
        }
    }
     i++;
    }
    else{
        int j=i;
        while(j<n && s[j]=='1'){  cnt1++;j++;}
         i=j+1;
        if(j==n){
            cout<<s<<endl;
            return;
        }
        
        //now you are standing at '0'
        if(k>cnt1){
            swap(s[j-cnt1],s[j]);
            k-=cnt1;
        }
        else{
            swap(s[j-min(cnt1,k)],s[j]);
            cout<<s<<endl;
            return;
        }

    }
    }



cout<<s<<endl;

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