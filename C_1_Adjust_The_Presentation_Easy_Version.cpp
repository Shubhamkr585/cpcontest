#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        set<int> s;
        int j = 0;
        bool ans = true;
        for (int i = 0; i < m; i++)
        {
            if (j < n && b[i] == v[j])
            {
                s.insert(v[j]);
                j++;
            }
            else if (s.find(b[i]) == s.end())
                ans = false;
        }
        if (ans)
            cout << "YA\n";
        else
            cout << "TIDAK\n";
    }
}