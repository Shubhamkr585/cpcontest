#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
       vector<vector<int>>grid(n+1,vector<int>(n+1,0));
       int mid=(n+1)/2;
       for(int i=1;i<=n;i++){
                grid[i][n-i+1]=mid;
       }
       for(int i=1;i<=n;i++){
        int start=mid+1;
        int pos=n-i;
        while(pos>=1){
            grid[pos][i]=start;
            start++;
            if(start>n)
            start=1;
            pos--;
        }
        int j=n;
        pos=n-i+1;

        while(j>pos){
            grid[j][i]=start;
            start++;
            if(start>n)
            start=1;
            j--;
        }
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        cout<<grid[i][j]<<" ";
        cout<<endl;
    }
    }

    return 0;
}
