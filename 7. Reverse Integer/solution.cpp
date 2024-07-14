//https://leetcode.com/problems/reverse-integer/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        if(x>=INT_MAX || x<=INT_MIN) return 0;
        bool isNegative = x<0;
        if(isNegative)x=x*-1;
        queue<int>q;
        long long int i=0;
        while(x>0){
            q.push(x%10);
            x/=10;
            i++;
        }
        i--;
        long long int sum=0;
        while(1){
            if(!q.front()){
                i--;
                q.pop();
            }
            else break;
        }
        while(!q.empty()){
            sum+=pow(10,i)*q.front();
            q.pop();
            i--;
        }
        if(sum<INT_MIN || sum>INT_MAX)return 0;
        if(isNegative)sum = sum*-1;
        return sum;
    }
};
int main(){
    Solution s;
    cout<<s.reverse(123);
    return 0;
}