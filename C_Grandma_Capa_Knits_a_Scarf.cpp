#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
ll checkpalin(string s,int l,int h,char c){
    ll count=1;
    while(l<h){
        if(s[l]!=s[h]){
            if(s[l]!=c && s[h]!=c){
                return -1;
            }
            else if(s[l]==c)
                l++;
            else
                h--;
               count++; 
        }
        else{
            l++;
            h--;
        }
    }
    return count;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
string s;
cin>>s;
int l=0,h=n-1;
ll ans1=0,ans2=0;
while(l<h){
    if(s[l]==s[h]){
       l++;
       h--;
    }
    else{
        ans1=checkpalin(s,l+1,h,s[l]);
        ans2=checkpalin(s,l,h-1,s[h]);
        break;
    }
}
if(ans1==-1 && ans2==-1)
    cout<<"-1"<<endl;
    else if(ans1==-1)
        cout<<ans2<<endl;
    else if(ans2==-1)
        cout<<ans1<<endl;
    else
        cout<<min(ans1,ans2)<<endl;
        
}
return 0;
}