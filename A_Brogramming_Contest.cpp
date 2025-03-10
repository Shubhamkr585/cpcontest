#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string smallestNumber(string p) {
            int n=p.size(),i=0;
            p.push_back(p[n-1]);
            string ans;
            set<int>st={1,2,3,4,5,6,7,8,9};
            while(i<=n){
                if(p[i]=='D'){
                 int cnt=0;
                 while(i<=n && p[i]=='D'){
                    i++;
                    cnt++;
                 }
                 int ele=*st.begin() + cnt;
                 while(cnt>0){
                    st.erase(st.find(ele));
                    ans.push_back(char(ele+'0'));
                    ele--,cnt--;
                 }
                }
                else{
                    while(i<=n && p[i]=='I'){
                        int ele=*st.begin();
                        ans.push_back(char(ele+'0'));
                        st.erase(st.begin());
                        i++;
                    }
                }
            }
           return ans;
        }
    };
    int main(){
        string s="IIIDIDDD";
        Solution obj;
        cout<<obj.smallestNumber(s)<<endl;
    }