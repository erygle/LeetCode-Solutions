//https://leetcode.com/problems/kth-distinct-string-in-an-array/description/?envType=daily-question&envId=2024-08-05

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto i: arr)mp[i]++;
        string ans="";
        for(auto i: arr){
            if(mp[i]<2){
                ans=i;
                k--;
            }if(!k)break;
        }if(k)return "";
        return ans;
    }
};

int main() {
    vector<string> arr = {"a", "b", "c", "a"};
    int k = 2;

    Solution obj;
    string result = obj.kthDistinct(arr, k);
    cout << "Kth distinct string: " << result << endl;

    return 0;
}
