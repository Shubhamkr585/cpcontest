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
int a, b;
    cin >> a >> b;
    int pXor=0;
  for(int i=0;i<a;i++)
  pXor^=i;
 
    if (pXor == b) {cout << a << '\n';}
    else if ((pXor ^ b) != a) {cout << a + 1 << '\n';}
    else {cout << a + 2 << '\n';}
}
return 0;
}