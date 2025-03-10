#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
string binary_representation(ll value, int index) {
    string r = "";
    for (int i = index - 1; i >= 0; i--) {
        char ch = (value & (1LL << i)) ? '1' : '0';
        r.push_back(ch);
    }
    return r;
}

int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
ll n;
cin>>n;
vec a(n);
for(int i=0;i<n;i++)
cin>>a[i];
ll ans=-1;
for(int i=1;i<=57;i++){
    unordered_set<string>st;
    for(int j=0;j<n;j++){
        st.insert(binary_representation(a[j],i));
        if(st.size()>2)
        break;
    }
    if(st.size()==2){
        ans=i;
        break;
    }
    st.clear();
}
cout<<(ll)(pow(2,ans))<<endl;
}
return 0;
}