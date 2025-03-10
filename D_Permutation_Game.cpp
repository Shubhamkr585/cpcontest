#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
      string s;
        cin>>s;
        int c1=0,c0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            c1++;
            else{
                int j=i;
                while(j<n && a[j]=='0')
                j++;
                c0+=j-i;
                 i=j-1;
                }
    }
    cout<<((c0>=c1)?"NO\n":"Yes\n");
}
}