#include<bits/stdc++.h>
using namespace std;
#define vec vector<ll>
#define ll long long int
#define All(x)            (x).begin(), (x).end()
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vec a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

//finding the divisors of n
int count=0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        if(n/i==i){
            count++;
        }
        else{
            count+=2;
        }
    }
}
count++;
vec divisor(count);
ll ptr=1;
divisor[0]=1;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
           divisor[ptr]=i;
           divisor[count-ptr]=n/i;
           ptr++;
        }
}

ll maxi=INT64_MIN,mini=INT64_MAX,ans=0;
for(int i=0;i<count;i++){
    ll k=divisor[i],range=n/k,sum=0;
   for(int j=0;j<n;j++){
    sum+=a[j];
       if((j+1)%k==0){
           maxi=max(maxi,sum);
           mini=min(mini,sum);
           sum=0;
       }
   }
    ans=max(ans,abs(maxi-mini));
    maxi=INT64_MIN;
    mini=INT64_MAX;
}
cout<<ans<<endl;
}
return 0;
}