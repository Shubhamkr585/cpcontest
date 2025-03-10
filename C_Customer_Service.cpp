#include<bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t>0){
    t--;
    int n;
    cin >> n;
    vector<int> bk(n+1,0);
    vector<int> arr;
    for(int i=0;i<n;i++){
      vector<int> a(n);
      for(auto &nx : a){cin >> nx;}
      int c=0;
      for(int j=n-1;j>=0;j--){
        if(a[j]==1){c++;}
        else{break;}
      }
      arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    int res=0;
    for(auto &nx : arr){
      if(res<=nx){res++;}
    }
    cout << res << "\n";
  }
  return 0;
}
