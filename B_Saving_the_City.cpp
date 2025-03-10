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
ll a,b;
cin >> a >> b;
string s;
cin>>s;
ll cnt=0;
string crt="";
int index=0,n=s.length();
while(index<n && s[index]!='1')
index++;
if(index==n){
    cout<<0<<endl;
    return;
}
for(int i=index;i<n;){
    if(s[i]=='1')
    {
        cnt++;
        int pos=i;
        while(i<n && s[i]=='1')
        i++;
        crt.push_back(s[pos]);
    }
    else{
        if(cnt)
        crt.push_back(s[i]);
        i++;
    }
}
    
	ll cost = a;
	ll zero = 0;
	for(int i=1 ; i < crt.length(); i++)
	{
		if(crt[i] == '1' && zero)
		{
			cost += min(zero*b , a );
			zero = 0;
		}
		else if(crt[i] == '0')
			zero++;
	}
	cout << cost << endl;

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