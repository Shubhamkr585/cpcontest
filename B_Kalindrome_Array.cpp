#include<bits/stdc++.h>
#define vec vector<ll>
#define ll long long int
using namespace std;
#define all(vec) vec.begin(),vec.end()
void solve(){
    ll n;
    cin>>n;
    vec a(n);
    vec b(n,0);
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll i=0,j=n-1,pos1=-1,pos2=-1;
    bool flag=true;
    while(i<j){
        if(a[i]!=a[j]){
            pos1=i;
            pos2=j;
            flag=false;
            break;
        }
        i++,j--;
    }
    //form an array after removing all the element equal to a[pos1]
    j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[pos1])
        b[j++]=a[i];
    }
    //j is the size of the new array
    ll k=0;j--;flag=true;
    while(k<j){
        if(b[k]!=b[j]){
            flag=false;
            break;
        }
        k++,j--;
    }
    if(flag){
        cout<<"YES"<<endl;
        return;
    }
     j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[pos2])
        b[j++]=a[i];
    }
    k=0;j--;flag=true;
    while(k<j){
        if(b[k]!=b[j]){
            flag=false;
            break;
        }
        k++,j--;
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}