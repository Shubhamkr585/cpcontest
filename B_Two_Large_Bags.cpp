
#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve()
{
    int n;
    cin>>n;

    // map<int,int>mp;
    vector<int>mp(n+2,0);
    int mini = INT_MAX;

    for(int i=0;i<n;i++)
    {
        int x = 0;
        cin>>x;
        mini = min(mini,x);
        mp[x]++;
    }

    int extra = 0;
   for(int i = mini;i<=n;i++)
   {
   if(mp[i]>1)
   {
    mp[i+1]+= mp[i] - 2;
    mp[i] = 0;
   }
   else if(mp[i]==1)
   {
      cout<<"No"<<endl;
      return; 
   }
   } 
   for(int i=mini;i<=n;i++){
   if((mp[i]%2==1))
   {
    cout<<"No"<<endl;
    return;
   }
}
   cout<<"Yes"<<endl;
   

}

signed main()
{
 
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}