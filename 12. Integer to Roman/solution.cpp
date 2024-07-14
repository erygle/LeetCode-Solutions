//https://leetcode.com/problems/integer-to-roman/description/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string s="";
        map<int,string>m;
        m[0]="I";
        m[1]="IV";
        m[2]="V";
        m[3]="IX";
        m[4]="X";
        m[5]="XL";
        m[6]="L";
        m[7]="XC";
        m[8]="C";
        m[9]="CD";
        m[10]="D";
        m[11]="CM";
        m[12]="M";
        vector<int>arr = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        while(num>0){
            auto a = 0;
            if (num!=1) a = upper_bound(arr.begin(),arr.end(),num) - arr.begin() - 1;
            s += m[a];
            num -= arr[a];
        }
        return s;
    }
};
int main(){
    Solution s;
    cout<<s.intToRoman(3);
    return 0;
}
