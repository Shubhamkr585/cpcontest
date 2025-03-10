#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        // int solve(int index,int n,int prev,vector<vector<int>>& dp,vector<int>& nums){
        //     if(index==n)
        //         return 0;
        //     if(dp[index][prev+1]!=-1 )  return dp[index][prev+1];
        //     // not take 
        //     int nottake=0+solve(index+1,n,prev,dp,nums);
        //     int take=0;
        //     if(prev==-1 || nums[index]>nums[prev])
        //         take=1+solve(index+1,n,index,dp,nums);
        //     return dp[index][prev+1]=max(take,nottake);
        // }
        int lengthOfLIS(vector<int>& nums) {
            int n=nums.size();
            vector<vector<int>>dp(n+1,vector<int>(n+1,0));
            for(int i=n-1;i>=0;i--){
                for(int j=n-1;j>=-1;j--){
                  int nottake=dp[i+1][j+1];
                  int take=0;
                  if(j==-1 || nums[i]>nums[j])
                  take=1+dp[i+1][i+1];
                  dp[i][j+1]=max(take,nottake);
                }
                
            }
            int maxlen=dp[0][0],ans=0;
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    cout<<dp[i][j]<<" ";
                     if(dp[i][j]==maxlen)
                     ans++;
                }
                cout<<endl;
            }
            return ans;
    }
        
    };

    int main(){

        Solution obj;
        vector<int>nums={1,3,5,4,7};
        cout<<obj.lengthOfLIS(nums)<<endl;
    }