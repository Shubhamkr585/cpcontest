//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &a) {
        sort(a.begin(),a.end());
        int start=0,n=a.size();
        string num1="",num2="";
        while(start<n && a[start]==0)
        start++;
        bool flag=true;
        while(start<n){
            if(flag)
            num1.push_back(char(a[start]+'0'));
            else
            num2.push_back(char(a[start]+'0'));
            start++;
            flag=!flag;
        }
        //the problem is boiled dowm to finding the sum of two strings which is already done
        if(num1.size()!=num2.size())
        num2='0'+num2;

        string ans="";
        int carry=0;
        for(int i=num1.size()-1;i>=0;i--){
            int sum=(num1[i]-'0')+(num2[i]-'0')+carry;

            ans.push_back((sum%10)+'0');
            carry=sum/10;
           
        }
        if(carry!=0)
        ans.push_back(char(carry+'0'));
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    vector<int> a={9,4};
    Solution obj;
    cout<<obj.minSum(a)<<endl;
    return 0;
}

// } Driver Code Ends