//https://leetcode.com/problems/robot-collisions/description/?envType=daily-question&envId=2024-07-13
#include <bits/stdc++.h>
using namespace std;
//vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions)
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<vector<int>> robots;

        for (int i = 0; i < n; ++i) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }

        sort(robots.begin(), robots.end());

        vector<vector<int>> stack;

        for (auto& robot : robots) {
            if (robot[2] == 'R' || stack.empty() || stack.back()[2] == 'L') {
                stack.push_back(robot);
                continue;
            }

            if (robot[2] == 'L') {
                bool add = true;
                while (!stack.empty() && stack.back()[2] == 'R' && add) {
                    int last_health = stack.back()[1];
                    if (robot[1] > last_health) {
                        stack.pop_back();
                        robot[1] -= 1;
                    } else if (robot[1] < last_health) {
                        stack.back()[1] -= 1;
                        add = false;
                    } else {
                        stack.pop_back();
                        add = false;
                    }
                }

                if (add) {
                    stack.push_back(robot);
                }
            }
        }

        vector<int> result;
        sort(stack.begin(), stack.end(), [](vector<int>& a, vector<int>& b) {
            return a[3] < b[3];
        });

        for (auto& robot : stack) {
            result.push_back(robot[1]);
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<int> positions = {1, 2, 3, 4, 5};
    vector<int> healths = {1, 2, 3, 4, 5};
    string directions = "RRRRR";
    vector<int> result = s.survivedRobotsHealths(positions, healths, directions);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}
