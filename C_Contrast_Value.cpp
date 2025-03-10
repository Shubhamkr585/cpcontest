#include <bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(), vec.end()
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;
// cin >> t;
while (t--)
{
ll n=4;
// cin >> n;
vec a={1,3,7,9};
// for (int i = 0; i < n; i++)
// cin >> a[i];
  n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      if(a[i] < a[i + 1] && a[i + 1] < a[i + 2] || a[i] > a[i + 1] && a[i + 1] > a[i + 2])
      ans -= 1;
      cout<<i<<endl;
    }
    cout << ans << '\n';
}
return 0;
}