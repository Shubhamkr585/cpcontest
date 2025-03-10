#include <bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(), vec.end()
void solve()
{
    ll n, m;
    cin >> n >> m;
    vec a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    if (n == m)
    {
        cout << n << endl;
        return;
    }
    sort(all(a));
    vec diff(m);
    for (int i = 0; i < m - 1; i++)
    {
        diff[i] = a[i + 1] - a[i] - 1;
    }

    diff[m - 1] = n + a[0] - a[m - 1] - 1;
    sort(all(diff));
    reverse(all(diff));
    
    ll sum = 0, p;
    if (diff[0] == 1)
    {
        cout << n - 1 << endl;
        return;
    }
    else
        sum = diff[0] - 1;
    for (ll i = 1; i < m; i++)
    {
        p = 4 * i;
        diff[i] -= p;
        if (diff[i] <= 0)
            break;
        else if (diff[i] == 1)
        {
            sum++;
            break;
        }
        sum += diff[i] - 1;
    }
cout << n - sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}