#include <bits/stdc++.h>
using namespace std;


int decodeHelper(string &digits, int index,vector<int>&dp) {
  
    int n = digits.length();

    if (index >= n) {
        return 1;
    }
    if(dp[index]!=-1) return dp[index];
    int ways = 0;

    if (digits[index] != '0') {
        ways = decodeHelper(digits, index + 1,dp);
    }

    if ((index + 1 < n) && ((digits[index] == '1' && 
         digits[index + 1] <= '9') || 
         (digits[index] == '2' && digits[index + 1] <= '6'))) {
      
        ways += decodeHelper(digits, index + 2,dp);
    }

    return dp[index]= ways;
}
int countDecodes(string digits) {
    int n=digits.length();  
     vector<int>dp(n+1,-1);
  
    return decodeHelper(digits, 0,dp);
}

int main() {
     
   list<int>s;
   

    string digits = "112203";

    cout << countDecodes(digits) << endl;

    return 0;
}