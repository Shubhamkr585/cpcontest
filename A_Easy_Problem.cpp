#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),[&](auto const& x, auto const& y) {
            return x[1]<y[1]; 
        });
        int len=1,j=0;
        for(int i=1;i<pairs.size();i++) {
            if(pairs[j][1]<pairs[i][0]){
                // cout<<pairs[j][0]<<" "<<pairs[j][1]<<"  "<<pairs[i][0]<<" "<<pairs[i][1]<<""<<endl;
            len++;
            j=i;
            }
    }
    // for(auto const& pair : pairs)
    // cout << pair[0] << " " << pair[1] <<endl;
    return len;
    }
};
int main(){
    vector<vector<int>>pairs={{-10,-8},{8,9},{-5,0},{6,10},{-6,-4},{1,7},{9,10},{-4,7}};
// vector<vector<int>>pairs={{1,2},{2,3},{3,4}};
    Solution s;
    cout<<s.findLongestChain(pairs)<<endl;
}
//[[-10,-8],[8,9],[-5,0],[6,10],[-6,-4],[1,7],[9,10],[-4,7]]