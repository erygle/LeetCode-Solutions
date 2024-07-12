//https://leetcode.com/problems/maximum-score-from-removing-substrings/description/?envType=daily-question&envId=2024-07-12
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string a = "ab", b = "ba";
        if(x<y){
            swap(x,y);
            swap(a,b);
        }
        int ans = 0;
        stack<char> st;
        for(char c:s){
            if(st.empty()){
                st.push(c);
            }else{
                if(st.top()==a[0] && c==a[1]){
                    ans+=x;
                    st.pop();
                }else{
                    st.push(c);
                }
            }
        }
        string t;
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        stack<char> st2;
        for(char c:t){
            if(st2.empty()){
                st2.push(c);
            }else{
                if(st2.top()==b[0] && c==b[1]){
                    ans+=y;
                    st2.pop();
                }else{
                    st2.push(c);
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.maximumGain("cdbcbbaaabab",4,5);
    return 0;
}