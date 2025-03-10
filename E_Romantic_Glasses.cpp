You’re given strings 
S
S and 
P
P. 
P
P contains every character from a to z exactly once.

In one move, you can replace 
S
i
S 
i
​
  with 
P
27
−
ord
P
(
S
i
)
P 
27−ord 
P
​
 (S 
i
​
 )
​
 . Find the minimum number of moves needed to convert 
S
S into a sorted string.

EXPLANATION:
The main observation here is that performing the operation twice on the same index will just give us back the original character.
This is because:

Let 
c
c be the character initially at index 
i
i.
Operating once will set 
S
i
S 
i
​
  to 
P
x
P 
x
​
 , where 
x
=
27
−
ord
P
(
c
)
x=27−ord 
P
​
 (c).
Operating again will set it to 
P
y
P 
y
​
 , where 
y
=
27
−
ord
P
(
S
i
)
y=27−ord 
P
​
 (S 
i
​
 ).
However, after the first move 
S
i
S 
i
​
  equals 
P
x
P 
x
​
  - and 
ord
P
(
P
x
)
=
x
ord 
P
​
 (P 
x
​
 )=x.
So, 
y
=
27
−
x
=
27
−
(
27
−
ord
P
(
c
)
)
=
ord
P
(
c
)
y=27−x=27−(27−ord 
P
​
 (c))=ord 
P
​
 (c).
So, 
S
i
S 
i
​
  will get set to 
c
c, which is what it originally was.
Knowing that at most one operation will be applied to each index allows us to compute the answer using dynamic programming.

Let 
T
i
T 
i
​
  denote the character that would be at index 
i
i if one operation is applied to it.

Let 
d
p
i
,
j
dp 
i,j
​
  denote the minimum number of moves needed to turn the first 
i
i elements into a sorted sequence, where 
j
=
0
j=0 means no operation was used on index 
i
i, and 
j
=
1
j=1 means an operation was used.
We have 
d
p
1
,
0
=
0
dp1,0=0 and 
d
p
1
,
1
=
1
dp 
1,1
​
 =1. Then, for 
i
>
1
i>1:

d
p
i
,
0
dp 
i,0
​
  is either 
d
p
i
−
1
,
0
dp 
i−1,0
​
  (if 
S
i
≥
S
i
−
1
S 
i
​
 ≥S 
i−1
​
 ) or 
d
p
i
−
1
,
1
dp 
i−1,1
​
  (if 
S
i
≥
T
i
−
1
S 
i
​
 ≥T 
i−1
​
 ).
If neither options are valid, let’s say 
d
p
i
,
0
=
∞
dp 
i,0
​
 =∞, and if both are valid take the minimum.
d
p
i
,
1
dp 
i,1
​
  can be computed similarly as either 
d
p
i
−
1
,
0
+
1
dp 
i−1,0
​
 +1 or 
d
p
i
−
1
,
1
+
1
dp 
i−1,1
​
 +1 by comparing 
T
i
T 
i
​
  against 
S
i
−
1
S 
i−1
​
  and 
T
i
−
1
T 
i−1
​
 .
The final answer is 
min
⁡
(
d
p
N
,
0
,
d
p
N
,
1
)
min(dp 
N,0
​
 ,dp 
N,1
​
 ).
If this minimum is 
∞
∞ it’s impossible to make 
S
S sorted, so print 
−
1
−1 instead.

TIME COMPLEXITY:
O
(
N
)
O(N) per testcase.

CODE:
 Author's code (C++)
#include <bits/stdc++.h>
using namespace std;
void main_() {
	int t;
	cin>>t;
	while(t>0)
	{
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        map<char,char>mp;
        for(int i=0;i<26;i++)
        {
            mp[p[i]]=p[abs(25-i)];
            //cout<<p[i]<<p[abs(25-i)]<<"\n";
        }
        int dp1[n];
        int dp2[n];
        int mx=2*n;
        for(int i=0;i<n;i++)
        {
            dp1[i]=mx;
            dp2[i]=mx;
        }
        dp1[0]=0;
        dp2[0]=1;
        for(int i=1;i<n;i++)
        {
            if(dp1[i-1]!=-1)
            {
                if(s[i-1]<=s[i])
                {
                    dp1[i]=dp1[i-1];
                }
                if(s[i-1]<=mp[s[i]])
                {
                    dp2[i]=dp1[i-1]+1;
                }
            }

            if(dp2[i-1]!=-1)
            {
                if(mp[s[i-1]]<=s[i])
                {
                    dp1[i]=min(dp1[i],dp2[i-1]);
                }
                if(mp[s[i-1]]<=mp[s[i]])
                {
                    dp2[i]=min(dp2[i],dp2[i-1]+1);
                }
            }
        }
        int ans=min(dp1[n-1],dp2[n-1]);
        if(ans==2*n)
        cout<<"-1\n";
        else
        cout<<ans<<"\n";
        
		
        
        
        
        
        
        t--;
	}
}
static void run_with_stack_size(void (*func)(void), size_t stsize) {
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%rsp, (%0)\n"
        "mov %0, %%rsp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%rsp\n" : : "r"(send));
    free(stack);
}
int main() {
    run_with_stack_size(main_, 1024 * 1024 * 1024); // run with a 1 GiB stack
    return 0;
}
 Tester's code (C++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s, t;
	    cin>>s>>t;
	    int ord[26];
	    for(int i = 0; i < 26; i++){
	        ord[t[i] - 'a'] = i;
	    }
	    int dp[n][2];
	    dp[0][0] = 0;
	    dp[0][1] = 1;
	    for(int i = 1; i < n; i++){
	        dp[i][0] = n + 1;
	        dp[i][1] = n + 1;
	        if(s[i] >= s[i - 1]){
	            dp[i][0] = dp[i - 1][0];
	        }
	        if(s[i] >= t[26 - ord[s[i - 1] - 'a'] - 1]){
	            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
	        }
	        if(t[26 - ord[s[i] - 'a'] - 1] >= s[i - 1]){
	            dp[i][1] = dp[i - 1][0] + 1;
	        }
	        if(t[26 - ord[s[i] - 'a'] - 1] >= t[26 - ord[s[i - 1] - 'a'] - 1]){
	            dp[i][1] = min(dp[i][1], dp[i - 1][1] + 1);
	        }
	    }
	    int ans = min(dp[n - 1][0], dp[n - 1][1]);
	    if(ans > n){
	        ans = -1;
	    }
	    cout<<ans<<"\n";
	}
}
