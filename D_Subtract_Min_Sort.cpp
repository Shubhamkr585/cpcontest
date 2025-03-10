#include <bits/stdc++.h>
using namespace std;
#define vec vector<int>
#define ll long long int
void solve(){
  int n;
       cin>>n;
       ll s=0;

       vec a(n);
       for(int i=0;i<n;i++)
      cin>>a[i];
       ll mini;
       
       for(int i=0;i<n-1;i++)
       {
           mini=min(a[i],a[i+1]);
           a[i]-=mini;
           a[i+1]-=mini;
           
       }
       int m=0,i=0;
       while(i<n-1)
       {
           if(a[i]<=a[i+1])
           {
               m++;
           }
           i++;
           
       }
       if(m==n-1) cout<<"YES\n";
       else  cout<<"NO\n";
       s+=n;
}
int main()
{
   int t;
   cin>>t;
   while(t>0)
   {
     
       solve();
       t--;  
   }
   return 0;
}