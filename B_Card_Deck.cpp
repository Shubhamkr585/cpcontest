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
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
int start=n-1;
stack<ll>st;
set<ll>st2;

for(ll i=1;i<=n;i++){
    st2.insert(i);
}

ll ele=n;
while(start>=0){
    //search for n-k where k=0 at the satrt of the array
    if(a[start]==ele){
        //print the items
        cout<<a[start]<<" ";
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        // Remove the last element
    st2.erase(--st2.end());
    //set the current largest val to the last element of the set
    if(!st2.empty())
    ele=*(--st2.end());
        
    }
    else{ 
        
        st.push(a[start]);
        st2.erase(st2.find(a[start]));
    }
    start--;
}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
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