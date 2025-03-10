#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
stack<ll>st;
priority_queue<ll,vec,greater<ll>>pq;
for(int i=0;i<n;i++){
    if(st.empty())
    st.push(a[i]);
    else if(st.top()>a[i]){
        while(!st.empty() && st.top()>a[i])
        {
            ll ele=st.top()+1;
            st.pop();
            pq.push(ele);
        }
        st.push(a[i]);
    }
    else{
        st.push(a[i]);
    }
}
ll ele=0;
if(!st.empty() && !pq.empty())
{
    if(st.top()>pq.top()){
        pq.push(st.top()+1);
        st.pop();
    }
    else{
        pq.push(st.top());
        st.pop();
    }
}
vec ans;
while(!st.empty()){
    ans.push_back(st.top());
    st.pop();
}
reverse(ans.begin(),ans.end());
for(auto it:ans){
    cout<<it<<" ";
}
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
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