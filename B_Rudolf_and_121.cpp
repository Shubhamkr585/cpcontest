#include<bits/stdc++.h>
#define ll long long 
using namespace std;
#define vec vector<ll>
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vec a(n);
        bool flag1=true,flag2=true;
        for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0)
        flag1=false;
        if(a[i]%2!=1)
        flag2=false;
        }      
        if(!flag1 && !flag2){
        cout<<"-1"<<endl;
        continue;
        }
        ll p=pow(2ll,29);
        for(ll i=29;i>=0;i--){
            for(int i=0;i<n;i++)
            a[i]=abs(a[i]-p);
            p/=2;
        }
       if(a[0]==1){
           cout<<"31"<<endl;
           ll v=pow(2ll,29);
           for(int i=0;i<=29;i++)
           cout<<v<<" ";
           cout<<"1"<<endl;
       }
       else{
          cout<<"30"<<endl;
           ll v=pow(2ll,29);
           for(int i=0;i<=29;i++)
           cout<<v<<" "; 
       }
    }
}