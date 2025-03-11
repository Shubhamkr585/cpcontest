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
string s;
cin >> s;
stack<char> st;
for(ll i = 0; i < n; i++) {
    if(st.empty())  {
        st.push(s[i]);
    } else if(st.top()=='(' && s[i]==')') {
        st.pop();
    }
    else{
        st.push(s[i]);
    }
        
    }
    if(st.empty()) {
        cout << "Yes" << endl;
    }
    else if(st.size()==2){
        char f=st.top();
        st.pop();
        char s=st.top();
        st.pop();
            cout << ((f!=s)?"Yes":"No") << endl;
        }
       
    
    else {
        cout << "No" << endl;
    }



}
int main() {
    fastio;

solve();
    
    return 0;
}