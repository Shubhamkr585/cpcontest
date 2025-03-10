#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
string s;
cin>>s;
ll n=s.size();
stack <pair<char,int>>up;
stack <pair<char,int>>down;
for(int i=0;i<n;i++){
    char c=s[i];
    if(isupper(c)){
        if(c=='B'){
            if(!up.empty()){
                up.pop();
            }
        }
        else{
            up.push({c,i});
        }
        }
        else{
            if(c=='b'){
                if(!down.empty()){
                    down.pop();
                }
            }
            else{
                down.push({c,i});
            }
        }
}
string ans="";
while(!up.empty()&& !down.empty()){
    if(up.top().second>down.top().second){
        ans+=up.top().first;
        up.pop();
    }
    else{
        ans+=down.top().first;
        down.pop();
    }
}
while(!up.empty()){
    ans+=up.top().first;
    up.pop();
}
while(!down.empty()){
    ans+=down.top().first;
    down.pop();
}
reverse(all(ans));
cout<<ans<<endl;
}
return 0;
}