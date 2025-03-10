#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll a,b;
    cin>>a>>b;//ans always exists
    if(a==b){
        cout<<0<<endl;
        return;
    }
    ll diff=abs(a-b);
    ll low=1,high=100000,ans;
    while(low<=high){
        ll mid=(low+high)/2;
        if(mid*(mid+1)==2*diff){
            cout<<mid<<endl;
            return;
        }
        else if(mid*(mid+1)<2*diff)
        low=mid+1;
        else high=mid-1;
    }
    low=1,high=100000,ans=high;
    while(low<=high){
        ll mid=(low+high)/2;
        ll val=(mid*(mid+1))/2;
        if(val>=diff){
          if(val-mid<=diff && (val-diff)%2==0){
              ans=min(ans,mid);
          }
          else{
              ans=min(ans,mid+1);
          }
          high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}

}
