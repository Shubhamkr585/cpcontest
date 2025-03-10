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
ll n,l,r;
cin>>n>>l>>r;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
ll sum=0,count=0;
bool flag=false;
for(int i=0;i<n;i++){
    if(a[i]>=l && a[i]<=r){
count++;
sum=0;
flag=false;
}
else if(a[i]>r){
    flag=false;
    sum=0;}
    else{
        ll pos;
        if(!flag){
            pos=i;
            flag=true;
        }
        sum+=a[i];
        if(sum>=l && sum<=r){
            count++;
            sum=0;
            flag=false;
        }
        else if(sum>r && flag){
            while(pos<i && sum>r){
                sum-=a[pos];
                pos++;
            }
            if(sum>=l && sum<=r){
                count++;
                sum=0;
                flag=false;
            }
        }

    }

}
cout<<count<<endl;
    }
return 0;
}