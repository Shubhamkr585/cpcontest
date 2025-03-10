#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

double bfsMaxValue(unordered_map<string, vector<pair<string, double>>> &graph, const string &start, double initialValue) {
    unordered_map<string, double> maxValues;
    maxValues[start] = initialValue;
    queue<string> q;
    q.push(start);

    while (!q.empty()) {
        string current = q.front();
        q.pop();
        double currentValue = maxValues[current];

        for (auto &[neighbor, rate] : graph[current]) {
            double newValue = currentValue * rate;
            if (newValue > maxValues[neighbor]) {
                maxValues[neighbor] = newValue;
                q.push(neighbor);
            }
        }
    }

    return maxValues[start];
}

unordered_map<string, vector<pair<string, double>>> buildGraph(const vector<vector<string>> &pairs, const vector<double> &rates) {
    unordered_map<string, vector<pair<string, double>>> graph;
    for (size_t i = 0; i < pairs.size(); ++i) {
        graph[pairs[i][0]].emplace_back(pairs[i][1], rates[i]);
        graph[pairs[i][1]].emplace_back(pairs[i][0], 1.0 / rates[i]);
    }
    return graph;
}

double maxCurrency(string initialCurrency, vector<vector<string>> pairs1, vector<double> rates1, vector<vector<string>> pairs2, vector<double> rates2) {
    auto graphDay1 = buildGraph(pairs1, rates1);
    auto graphDay2 = buildGraph(pairs2, rates2);

    unordered_map<string, double> maxDay1;
    queue<string> q;
    q.push(initialCurrency);
    maxDay1[initialCurrency] = 1.0;

    while (!q.empty()) {
        string current = q.front();
        q.pop();
        double currentValue = maxDay1[current];

        for (auto &[neighbor, rate] : graphDay1[current]) {
            double newValue = currentValue * rate;
            if (newValue > maxDay1[neighbor]) {
                maxDay1[neighbor] = newValue;
                q.push(neighbor);
            }
        }
    }

    double maxFinal = 0.0;
    for (auto &[currency, amount] : maxDay1) {
        maxFinal = max(maxFinal, bfsMaxValue(graphDay2, currency, amount));
    }

    return maxFinal;
}

int main() {
    string initialCurrency = "EUR";
    vector<vector<string>> pairs1 = {{"EUR", "USD"}, {"USD", "JPY"}};
    vector<double> rates1 = {2.0, 3.0};
    vector<vector<string>> pairs2 = {{"JPY", "USD"}, {"USD", "CHF"}, {"CHF", "EUR"}};
    vector<double> rates2 = {4.0, 5.0, 6.0};

    cout << fixed << maxCurrency(initialCurrency, pairs1, rates1, pairs2, rates2) << endl;
    return 0;
}
