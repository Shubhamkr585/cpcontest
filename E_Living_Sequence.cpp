#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>& p,vector<int>& suff,vector<int>&a,int k){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int maxi=0;
        p[a[i]]--;
        for(int j=1;j<=20;j++){
            maxi=max(maxi,p[j]);
        }
        if(p[k]>=maxi){
            cout<<1<<endl;
            return;
        }
     
    }
    
    for(int i=n-1;i>=1;i--){
        suff[a[i]]--;
        int maxi=0;
        for(int j=1;j<=20;j++){
            maxi=max(maxi,suff[j]);
        }
        if(suff[k]>=maxi){
            cout<<1<<endl;
            return;
        }
        
    }
    cout<<2<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>a(n);
	     map<int,int>mp;
	     vector<int>prefix(21,0);vector<int>suffix(21,0);
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    mp[a[i]]++;
	    prefix[a[i]]++;
	    suffix[a[i]]++;
	    }
	    int maxi=0;
	    for(auto it:mp){
	        maxi=max(it.second,maxi);
	    }
	    if(mp[k]>=maxi){
	        cout<<0<<endl;
	        continue;
	    }
	    if(a[0]==k || a[n-1]==k){
	        cout<<1<<endl;
	        continue;
	    }
	    solve(prefix,suffix,a,k);
	    
	    
	   
	   
	}

}
