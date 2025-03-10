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
string s;
cin>>n>>k;
cin>>s;
string ans="";
int b=0,i=0;
while(i<n){
if(s[i]=='1')
b++;
if(b==k-1){
    while(i<n && s[i]=='1'){
        ans+="1";
        i++;
    }
    string temp="";
    while(i<n && s[i]=='0'){
        temp+="0";
        i++;
    }

    while(i<n && s[i]=='1'){
        ans+="1";
        i++;
    }
    ans+=temp;
    b++;

}
else{
    ans+=s[i];
    i++;
}
}
cout<<ans<<endl;
}

int main() {
    fastio;
solve();
    return 0;
}