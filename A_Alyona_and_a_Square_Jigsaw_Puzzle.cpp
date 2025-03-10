#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){

       int n;
       cin>>n;
       vector<int>a(n+1);
       priority_queue<pair<int,int>,vector<pair<int,int>>>maxheap;
       
       for(int i=1;i<=n;i++){
       cin>>a[i];
       maxheap.push({a[i],i});
       }
       vector<int>per(n+1);//store the rank of the troops
	   int rank=1;
	   while(!maxheap.empty()){
		auto ele=maxheap.top();
		maxheap.pop();
		per[ele.second]=rank++;
	   }
	   int c=0;
       for(int i=2;i<=n;i++){
		if(abs(per[i]-per[i-1])==1)
		c++;
	   }
cout<<n-c<<endl;
   }
}