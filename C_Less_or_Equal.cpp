#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;  

    
    vector<int> K(N);
    vector<unordered_map<int, int>> freq(N);

    for (int i = 0; i < N; i++) {
        cin >> K[i];
        for (int j = 0; j < K[i]; j++) {
            int face;
            cin >> face;
            freq[i][face]++;
        }
    }
    
    double maxProbability = 0.0;
    
   
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double p = 0.0;
           
            if (freq[i].size() > freq[j].size()) {
                for (auto &entry : freq[j]) {
                    int number = entry.first;
                    int count_j = entry.second;
                    if (freq[i].count(number)) {
                        int count_i = freq[i][number];
                        p += ( (double)count_i / K[i] ) * ( (double)count_j / K[j] );
                    }
                }
            } else {
                for (auto &entry : freq[i]) {
                    int number = entry.first;
                    int count_i = entry.second;
                    if (freq[j].count(number)) {
                        int count_j = freq[j][number];
                        p += ( (double)count_i / K[i] ) * ( (double)count_j / K[j] );
                    }
                }
            }
            maxProbability = max(maxProbability, p);
        }
    }
    
   
    cout << fixed << setprecision(8) << maxProbability << "\n";
    
    return 0;
}
