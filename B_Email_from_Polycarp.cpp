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
ll n;
cin >> n;
for(int i=0;i<n;i++){
    string s1,s2;
    cin>>s1>>s2;
    int k=0,j=0;
    if(s1[0]!=s2[0]){
        cout<<"NO"<<endl;
        continue;
    }
    bool flag=true;
    while(k<s2.size() && j<s1.size()){
        if(s2[k]==s1[j]){
            k++,j++;
        }
        else if( j>0 && s2[k]!=s1[j-1]){
            flag=false;
            break;
        }
        else{
            k++;
        }
    }
    if(j==s1.size() && k!=s2.size() && s1[j-1]==s2[k] && flag || j==s1.size() && k==s2.size()){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
}
int main() {
    fastio;

solve();

    return 0;
}