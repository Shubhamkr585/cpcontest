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
 void solve(){
    string s;
    cin>>s;
    bool turn=1;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(st.top()==s[i]){
            turn=!turn;
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        char ch=st.top();
        st.pop();
        if(!st.empty() && st.top()){
            if(ch==st.top()){
                turn=!turn;
                st.pop();
            }
        }
    }
    cout<<((turn==0)?"Yes\n":"No\n");


}
int main() {
    fastio;

solve();

    return 0;
}