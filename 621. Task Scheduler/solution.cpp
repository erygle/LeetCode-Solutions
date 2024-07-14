//https://leetcode.com/problems/task-scheduler/description/?envType=daily-question&envId=2024-03-19
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char c:tasks){
            freq[c-'A']++;
        }
        sort(freq.begin(),freq.end());
        int maxFreq = freq[25]-1;
        int idleSlots = maxFreq*n;
        for(int i=24;i>=0;i--){
            idleSlots -= min(maxFreq,freq[i]);
        }
        return idleSlots>0?idleSlots+tasks.size():tasks.size();
    }
};
int main(){
    Solution s;
    vector<char> g = {'A','A','A','B','B','B'};
    cout<<s.leastInterval(g,2)<<endl;
    return 0;
}