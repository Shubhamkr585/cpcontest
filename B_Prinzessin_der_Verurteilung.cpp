#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    for(ll i=0;i<n;i++){    
        st.insert(to_string(s[i]));
    }
    for(int i=0;i<n-1;i++){
        string temp="";
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        st.insert(temp);
    }
    //do it string of length 3
    for(int i=0;i<n-2;i++){
        string temp="";
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        temp.push_back(s[i+2]);
        st.insert(temp);
    }
    for(int i=0;i<26;i++){
         if(st.find(to_string(char('a'+i)))==st.end()){
             cout<<char('a'+i)<<endl;
             return;
         }
    }
    //string of size 2
    for(int i=0;i<26;i++){ 
        string temp="";
        temp.push_back(char('a'+i));
        
        for(int j=0;j<26;j++){
            temp.push_back(char('a'+j));
            if(st.find(temp)==st.end()){
                cout<<temp<<endl;
                return;
            }
            temp.pop_back();
        }

    }
    //string of size 3
    for(int i=0;i<26;i++){ 
        string temp="";
        temp.push_back(char('a'+i));
        for(int j=0;j<26;j++){
            temp.push_back(char('a'+j));
            for(int k=0;k<26;k++){
                temp.push_back(char('a'+k));
                if(st.find(temp)==st.end()){
                    cout<<temp<<endl;
                    return;
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
solve();
}
}