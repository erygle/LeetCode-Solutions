//https://leetcode.com/problems/fizz-buzz/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>st;
        for(int i=1 ; i<=n ; i++){
            if(!(i%3) && !(i%5))st.push_back("FizzBuzz");
            else if(!(i%3))st.push_back("Fizz");
            else if(!(i%5))st.push_back("Buzz");
            else st.push_back(to_string(i));
        }
        return st;
    }
};

int main(){
    int n=15;
    Solution sol;
    vector<string> res=sol.fizzBuzz(n);
    for(string i:res)cout<<i<<" ";
    return 0;
}