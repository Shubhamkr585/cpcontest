#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
string s,ans;
cin>>s;
ll n=s.size();
char ch;
for(int i=0;i<s.size();i++){
    if(s[i]=='9' || s[i]=='8' || i==n-1){
    continue;
    }
    else{
        ll index=-1,mx=s[i]-'0';
        for(ll j=i+1;j<min(i+9ll,n);j++){
            ll curr=s[j]-'0' -(j-i);
            if(curr>mx)
            {
                index=j;
                mx=curr;
            }
        // cout<<curr<<endl;

        }
        if(index!=-1){
            
            for(int k=index;k>i;k--){
                s[k]=s[k-1];
            }
            s[i]=char(mx+'0');
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
