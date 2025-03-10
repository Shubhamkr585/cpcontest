#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long powerMod(int n) {
    long long result = 1;
    long long base = 2;

    while (n > 0) {
        if (n % 2 == 1) { 
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD; 
        n /= 2; 
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
    }
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
    cout << powerMod(b) << endl;
    }
    return 0;
}