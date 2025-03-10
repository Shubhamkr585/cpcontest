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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            cin >> a[i].second;
        }
        sort(all(a), [&](pair<ll, ll> &a, pair<ll, ll>& b)
             { return   (a.first + a.second <b.first + b.second) ; 
            });
        vec ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(a[i].first);
            ans.push_back(a[i].second);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}