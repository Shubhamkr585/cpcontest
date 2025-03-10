#include <bits/stdc++.h>
using namespace std;
#define sort(vec) sort(vec.begin(),vec.end())
#define ll long long int
#define endl '\n'
#define vec vector<ll>
#define uo unordered_set<ll>
#define mp map<ll,ll>
#define us unordered_set<ll>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 void solve() {
ll n;
cin >> n;
string s;
cin>>s;
if(n==1){
    cout<<s<<endl;
    return ;
}
if(n==2){
    s[0]=s[1];
    cout<<s<<endl;
    return;
}

vector<ll>fre(26,0);
for(int i=0;i<n;i++){
    fre[s[i]-'a']++;
}
ll least=100,maxi=0;
char ch1,ch2;
for(int i=0;i<26;i++){
    if(fre[i]!=0){
        if(fre[i]<least){
            least=fre[i];
            ch1=char(97+i);
        }
        if(fre[i]>maxi){
            maxi=fre[i];
            ch2=char(97+i);
        }
    }
}

if(least==maxi){
    int index=0,index2=0;
    for(int i=0;i<n;i++){
        if(s[i]==ch1)
        {
            index=i;
        }
        if(ch1!=s[i]){
            index2=i;
        }
    }
    s[index]=s[index2];
    cout<<s<<endl;
    return ;
}
int index1=0,index2=0;
for(int i=0;i<n;i++){
    if(s[i]==ch1)
    {
        index1=i;
        break;
    }
}
for(int i=0;i<n;i++){
    if(s[i]==ch2){
        index2=i;
        break;
    }
}
s[index1]=s[index2];
cout<<s<<endl;

}
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
solve();
    }
    return 0;
}