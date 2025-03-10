
#include <bits/stdc++.h>
#define int long long
using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    vector<int>blocked((2*n)+1,0);
    vector<int>pref((2*n)+1);


    for(int i=0;i<n;i++)
    {
    cin>>a[i].first>>a[i].second;
    if(a[i].first==a[i].second)
    blocked[a[i].first]++;
    }
    if(blocked[0]>0)
    pref[0]=1;

    for(int i=1;i<=(2*n);i++)
    {
        pref[i] = pref[i-1];
;        if(blocked[i]>0)
        pref[i]++;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i].first==a[i].second)
        {
            if(blocked[a[i].first]>1)
            cout<<0;
            else
            cout<<1;

            continue;
        }
        else
        {
            int len = a[i].second-a[i].first+1;
            if(pref[a[i].second]-pref[a[i].first-1]==len)
            cout<<0;
            else
            cout<<1;
        }
       
    }
    cout<<endl;



}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}