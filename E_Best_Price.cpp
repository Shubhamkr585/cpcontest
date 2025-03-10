
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    cin>>b[i];

    int ans = 0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<n;i++)
    {
        int it1 = lower_bound(a.begin(),a.end(),a[i])-a.begin();
        int it2 = lower_bound(b.begin(),b.end(),a[i]) - b.begin();

        int neg = it1-it2;

        if(neg<=k)
        {
            int cust = n - it2;
            ans = max(ans,cust*a[i]);
        }


    }

    for(int i=0;i<n;i++)
    {
        int it1 = lower_bound(a.begin(),a.end(),b[i])-a.begin();
        int it2 = lower_bound(b.begin(),b.end(),b[i]) - b.begin();

        int neg = it1-it2;

        if(neg<=k)
        {
            int cust = n - it2;
            ans = max(ans,cust*b[i]);
        }


    }

    cout<<ans<<endl;

    

    
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}