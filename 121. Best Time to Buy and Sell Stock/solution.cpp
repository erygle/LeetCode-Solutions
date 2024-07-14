//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int sell,maxprice = 0;
        int n = prices.size();
        for(int i=0 ; i<n ; i++){
            minprice = min(minprice, prices[i]);
            int sell = prices[i] - minprice;
            maxprice = max(sell, maxprice);
        }
    return maxprice;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices);
    return 0;
}