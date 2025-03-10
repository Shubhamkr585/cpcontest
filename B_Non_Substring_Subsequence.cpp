#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define REP(i,N) for (int i = 0; i <(N); i++)
#define ll long long int
#define endl '\n'
#define vec vector<ll>

ll sumofdigits(ll n){
    if(n/10==0)
    return n;
    return n%10+sumofdigits(n/10);
}
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int main() {
ll n=275693833,val1=sumofdigits(n),val2=sumofdigits(val1),val3=sumofdigits(val2);
cout<<val1<<" "<<val2<<" "<<val3<<endl;


    return 0;
}