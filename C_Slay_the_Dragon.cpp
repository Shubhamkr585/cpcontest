// class Solution {
// public:

// int fans=0;
//     int solve(int idx,int diff,vector<vector<int>>&vec,int n,vector<int>&nums,vector<vector<int>>&dp)
//     {
//         if(idx==n)
//         {
//             return 1;
//         }
//         if(diff>300)
//           return 1;
//         if(dp[idx][diff]!=-1)
//         return dp[idx][diff];
//         int lw=nums[idx]-diff;
//         int up=nums[idx]+diff;
//         int ans=0;
//         if((lw<=300)&&(lw>=0))
//         { 
//            auto it=upper_bound(vec[lw].begin(),vec[lw].end(),idx);
//            if(it!=vec[lw].end())
//            ans=max(ans,1+solve((*it),diff,vec,n,nums,dp));
//         }
//         if((up<=300))
//         {
//             auto in=upper_bound(vec[up].begin(),vec[up].end(),idx);
//             if(in!=vec[up].end())
//            ans=max(ans,1+solve((*in),diff,vec,n,nums,dp));
//         }
//         // we are starting fresh so we dont need the max considered from below state to be returned in ans this will not contribute to previous state.
//         fans=max(fans,solve(idx+1,diff,vec,n,nums,dp));

//         ans=max(ans,solve(idx,diff+1,vec,n,nums,dp));
//         dp[idx][diff]=ans;
//         return ans;
//     }
//     int longestSubsequence(vector<int>& nums) 
//     {
//       int n=nums.size();
//       vector<vector<int>>dp(n,vector<int>(302,-1));
//       vector<vector<int>>vec;
//       vec.resize(302);
//       reverse(nums.begin(),nums.end());
//       fans=0;
//       //int sz=302;
//      // vec.resize(sz);
//       for(int i=0;i<n;i++)
//       {
//           vec[nums[i]].push_back(i);
//       }
//     //  for(int diff=0;diff<=300;diff++)
//       //{
//         return max(fans,solve(0,0,vec,n,nums,dp));
//       //}
//     }
// };

