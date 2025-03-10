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
ll n;
cin>>n;
vector<int> factors;
 for (int i = 1; i <=sqrt(n); ++i) {
        if (n % i == 0) {
            factors.push_back(i); // 
            if (i != n / i) { 
                factors.push_back(n / i);
            }
        }
    }
    int low=0,high=factors.size()-1;
    while(low<=high){
        
    }
}
return 0;
}