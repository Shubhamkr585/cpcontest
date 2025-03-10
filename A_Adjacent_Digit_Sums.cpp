//make the all '1' contigous subarray by swapping with '0'

#include<bits/stdc++.h>
 
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(auto x : s)
		cnt += (x == '1' ? 1 : 0);
	int pos = -1;
	int cur = -1;
	for(int i = 0; i < n; i++)
	{
	 	if(s[i] == '1')
	 	{
	 	    cur++;
	 	    if(cur == cnt / 2)
	 	    	pos = i;
	 	}	
	}
	long long ans = 0;
	cur = pos - cnt / 2;
	for(int i = 0; i < n; i++)
		if(s[i] == '1')
		{
		 	ans += abs(cur - i);
		 	cur++;
		}
	cout << ans << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	 	solve();

}