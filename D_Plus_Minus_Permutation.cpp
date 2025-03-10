#define ll long long
#include <bits/stdc++.h>
using namespace std;
// range sum
ll range_sum(ll l, ll r)
{
return ((l + r) * (r - l + 1)) / 2;
}
int main()
{
int t;
cin >> t;
while (t--)
{
ll n, x, y;
cin >> n >> x >> y;
ll l = (x * y) / (__gcd(x, y));
ll plus = n / x - n / l;
ll minus = n / y - n / l;
cout << range_sum(n - plus + 1, n) - range_sum(1, minus) << endl;
}
return 0;
}