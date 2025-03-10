#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ii int

void subArrayExists(int arr[], int N)
{
    set<int> sumSet;
    sumSet.insert(0);
          int count=0;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        if ( sumSet.find(sum) != sumSet.end()){
            count++;
            sumSet.clear();
            sumSet.insert(0);
            sum = 0;
            }
             sumSet.insert(sum);
        }
  cout<<count<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    subArrayExists(arr, n);
}
    return 0;
}