//https://leetcode.com/problems/reverse-prefix-of-word/description/?envType=daily-question&envId=2024-05-01
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int len = word.size();
        int i;
        for(i=0 ; i<len ; i++){
            if(word[i]==ch)break;
        }
        cout<<i;
        string s="";
        if(i<len){
            int temp=i;
            for(;temp>=0;temp--)s+=word[temp];
            i++;
            for(;i<len;i++)s+=word[i];
        }else s=word;
        return s;
    }
};

int main(){
    Solution s;
    cout<<s.reversePrefix("abcdefg",'d')<<endl;
    return 0;
}