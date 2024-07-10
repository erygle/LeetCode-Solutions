//https://leetcode.com/problems/crawler-log-folder/description/?envType=daily-question&envId=2024-07-10
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int sum=0;
        int n = logs.size();
        for(int i=0 ; i<n ; i++){
            if(logs[i]=="../"){
                if(sum!=0)sum--;
            }
            else if(logs[i]=="./")continue;
            else sum++;
        }
        return sum;
    }
};

int main(){
    Solution s;
    vector<string> logs = {"./","../","./"};
    cout<<s.minOperations(logs);
    return 0;
}