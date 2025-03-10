#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size(),m=worker.size();
        sort(worker.begin(),worker.end());
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++){
            //{difficulty,profit}
            p[i]={difficulty[i],profit[i]};  
        }
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            difficulty[i]=p[i].first;
            profit[i]=p[i].second;
        }
        for(int i=1;i<n;i++){
           profit[i]=max(profit[i],profit[i-1]);
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int ub=upper_bound(difficulty.begin(),difficulty.end(),worker[i])-difficulty.begin();
            if(ub!=0)
            ans+=profit[--ub];
        }
        return ans;
    }
};
int main(){
    vector<int>d={68,35,52,47,86};
    vector<int>p={67,17,1,81,3};
    vector<int>w={92,10,85,84,82};
    Solution solution;
    cout<<solution.maxProfitAssignment(d,p,w)<<endl;
}
