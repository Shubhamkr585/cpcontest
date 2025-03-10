#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        vector<int> subArr(arr.begin(), arr.begin() + i);
        sort(subArr.rbegin(), subArr.rend());
        
        int sum = 0;
        for (size_t j = 0; j < subArr.size(); j += 2) {
            sum += subArr[j];
        }
        
        if (sum > k) {
            break;
        }
        result = i;
    }
    
    cout << result << endl;
    return 0;
}


