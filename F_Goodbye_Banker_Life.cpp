#include <iostream>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        unsigned int k;
        cin >> n >> k;
        for (int j = 1; j <= n; j++){
            if (((j - 1) & (n - 1)) == (j - 1))
                cout << k << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }
    return 0;
}
