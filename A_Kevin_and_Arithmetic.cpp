#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,q;
	    cin>>n>>q;
	    vector<ll>a(n);vector<ll>pref(n,0);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    pref[0]=((n-1)*(n-2))/2;
	    for(int i=1;i<n-2;i++){
	        pref[i]=pref[i-1]+((n-i-1)*(n-i-2))/2;
	    }
        for(int i=0;i<n;i++)
        cout<<pref[i]<<" ";
        cout<<endl;
	    for(int i=0;i<q;i++){
	        ll k;
	        cin>>k;
	        int lb=lower_bound(pref.begin(),pref.end(),k)-pref.begin();
	        cout<<a[lb]<<endl;
	    }

	}

}
