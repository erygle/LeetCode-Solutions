//https://leetcode.com/problems/number-of-atoms/description/?envType=daily-question&envId=2024-07-14
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.size();
        stack<map<string, int>> stack;
        stack.push({});
        int i = 0;
        while (i < n) {
            if (formula[i] == '(') {
                stack.push({});
                i++;
            } else if (formula[i] == ')') {
                i++;
                int j = i;
                while (j < n && isdigit(formula[j])) {
                    j++;
                }
                int count = 1;
                if (j > i) {
                    count = stoi(formula.substr(i, j - i));
                }
                i = j;
                auto top = stack.top();
                stack.pop();
                for (auto& [atom, c] : top) {
                    stack.top()[atom] += c * count;
                }
            } else {
                int j = i + 1;
                while (j < n && islower(formula[j])) {
                    j++;
                }
                string atom = formula.substr(i, j - i);
                i = j;
                j = i;
                while (j < n && isdigit(formula[j])) {
                    j++;
                }
                int count = 1;
                if (j > i) {
                    count = stoi(formula.substr(i, j - i));
                }
                i = j;
                stack.top()[atom] += count;
            }
        }
        auto top = stack.top();
        vector<pair<string, int>> atoms(top.begin(), top.end());
        sort(atoms.begin(), atoms.end());
        string result;
        for (auto& [atom, count] : atoms) {
            result += atom;
            if (count > 1) {
                result += to_string(count);
            }
        }
        return result;
    }
};