#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;
#define ll long long
 void solve() {
  ll l=1,h=1e6;
  ll ans=l;
  while(l<=h){
    ll mid=(l+h+1)/2;
    cout<<mid<<endl;
    fflush(stdout);
    string str;
    cin>>str;
    if(str==">="){
        ans=mid;
     l=mid+1;
    }
    else{
       h=mid-1;
    }

  }
  cout<<"! "<<ans<<endl;
  fflush(stdout);
  
}
int main() {

    int t = 1;
    solve();
//     cin >> t;
//     while (t--) {
// solve();
//     }
    return 0;
}