#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        vector<int> mentions(numberOfUsers, 0);
        vector<bool> onlineStatus(numberOfUsers, true);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
            int timeA = stoi(a[1]);
            int timeB = stoi(b[1]);
            if (timeA == timeB) {
                return a[0] == "OFFLINE"; 
            }
            return timeA < timeB;
        });

        for (auto& event : events) {
            string eventType = event[0];
            int timestamp = stoi(event[1]);
            string details = event[2];

            while (!pq.empty() && pq.top().first <= timestamp) {
                auto [Time, userId] = pq.top();
                pq.pop();
                onlineStatus[userId] = true;
            }

            if (eventType == "OFFLINE") {
                int userId = stoi(details);
                onlineStatus[userId] = false;
                pq.emplace(timestamp + 60, userId);
            } else if (eventType == "MESSAGE") {
                if (details == "ALL") {
                    for (int userId = 0; userId < numberOfUsers; ++userId) {
                        mentions[userId]++;
                    }
                } else if (details == "HERE") {
                    for (int userId = 0; userId < numberOfUsers; ++userId) {
                        if (onlineStatus[userId]) {
                            mentions[userId]++;
                        }
                    }
                } else {
                    int  pos = 0;
                    while (pos < details.size()) {
                        if (details.substr(pos, 2) == "id") {
                            pos += 2;
                            int userId = 0;
                            while (pos < details.size() && isdigit(details[pos])) {
                                userId = userId * 10 + (details[pos] - '0');
                                pos++;
                            }
                            mentions[userId]++;
                        } else {
                            pos++;
                        }
                    }
                }
            }
        }

        return mentions;
    }
};
