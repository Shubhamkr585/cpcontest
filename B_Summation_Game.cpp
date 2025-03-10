#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c0=0,c1=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')
	        c1++;
	    }
	    if(c1&1)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}

}