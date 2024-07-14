//https://leetcode.com/problems/find-the-difference/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        for(int i=0; i<n ; i++)
            if(s[i]!=t[i])
                return t[i];
        return t[n];
    }
};

/*greedy
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        for(int i=0; i<n ; i++)
            if(s[i]!=t[i])
                return t[i];
        return t[n];
    }
};
*/

int main(){
    Solution s;
    string str1 = "abcd";
    string str2 = "abcde";
    cout<<s.findTheDifference(str1,str2);
    return 0;
}