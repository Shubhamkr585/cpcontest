#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool possible(vector<int>& a,int mid){
        if(mid==1) return true;
        int ptr1=0,ptr2=mid,len=1,n=a.size();
        while(ptr2+1<n){
            if(a[ptr1]>=a[ptr1+1] && a[ptr2]>=a[ptr2+1])
            {
                len++;
                if(len>=mid)
                return true;
            }
            else{
                len=1;
            }
            ptr1++,ptr2++;
        }
        return false;
    }
        int maxIncreasingSubarrays(vector<int>& nums) {
            //bs on answer
            //forming the increasing array
            
            int low=1,n=nums.size(),high=n/2,ans=1;
    
            vector<int>inc(n,1);
            int i=0;
            while(i<n){
                int j=i,len=1;
                while(i<n-1 && nums[i]<=nums[i+1])
                i++;
                
                len=i-j+1;
                cout<<len<<endl;
                while(j<=i){
                    inc[j]=len;
                    len--;
                    j++;
                }
                i++;
    
            }
    
            //printing the increasing array
            for(int i=0;i<n;i++)
            cout<<inc[i]<<" ";
            cout<<endl;
            while(low<=high){
                int mid=(low+high)/2;
                if(possible(nums,mid)){
                    ans=mid;
                    low=mid+1;
                }
                else
                high=mid-1;
            }
            return ans;
    
        }
    };

    int main(){
        int n;
        cin>>n;
        vector<int>nums={2,5,7,8,9,2,3,4,3,1};
     
        Solution obj;
        cout<<obj.maxIncreasingSubarrays(nums);
    }