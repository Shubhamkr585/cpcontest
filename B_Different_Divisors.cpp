#include <bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(), vec.end()
bool possible(ll mid, ll n)
{
    // mid should have atleast four divisors with
    // the differnce btw any two of them should be atleast n
    ll count=1,prev=1;
    for (int i = 2; i<=mid/2; i++)
    {
        if(mid%i==0){
            if(i-prev<n){
                return false;
            }
            else{
                prev=i;
            count++;
            }
        }
    }
    
    if(mid-prev>=n)
    count++;
    return count>=4;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n=2;
        // cin >> n;
        ll low = 6, high = INT32_MAX, ans = -1;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (possible(mid, n))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}