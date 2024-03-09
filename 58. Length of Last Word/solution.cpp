//https://leetcode.com/problems/length-of-last-word/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t spaces = s.find_last_not_of(" ");
        if (spaces != std::string::npos) {
            s.erase(spaces + 1);
        }
        reverse(s.begin(),s.end());
        int ct=0;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]==' ')break;
            ct++;
        }
        return ct;
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLastWord("Hello World");
    return 0;
}