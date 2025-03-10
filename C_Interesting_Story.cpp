#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(string s, int k) {
        int n=s.size();
        map<char,int>mp={{'N',0},{'S',0},{'E',0},{'W',0}};
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int nt=max(mp['N'],mp['S']),st=min(mp['S'],mp['N']),e=max(mp['E'],mp['W']),w=min(mp['W'],mp['E']);
        int maxi=0;
            if(k<=st){
        
                st-=k;
                nt+=k-st;
                k=0;
            }
            else{
                
                nt+=st;
                k=k-st;
                // cout<<"k"<<k<<endl;
                st=0;
            }
        if(k<=w){
            // cout<<"k "<<k<<endl;
            w-=k;
            e+=k-w;
            
        }

        else{
            // cout<<"ttt";
            e=e+min(k,w+st);
        }
        maxi=nt+e;
        return maxi;
    
    }
};
int main(){
    string str="NSWE";
    int k=1;
    Solution s;
    cout<<s.maxDistance(str,k)<<endl;
}