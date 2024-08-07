//https://leetcode.com/problems/integer-to-english-words/description/?envType=daily-question&envId=2024-08-07

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string>unit={"","Thousand","Million","Billion"};
    vector<string>below20={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string>tens={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string numberToWords(int num) {
        if(num==0)return "Zero";
        string ans="";
        for(int i=0;num>0;i++){
            if(num%1000!=0){
                ans=helper(num%1000)+unit[i]+" "+ans;
            }
            num/=1000;
        }
        ans.pop_back();
        ans.erase(ans.find_last_not_of(" \n\r\t")+1);
        return ans;
    }
    string helper(int num){
        if(num==0)return "";
        else if(num<20)return below20[num]+" ";
        else if(num<100)return tens[num/10]+" "+helper(num%10);
        else return below20[num/100]+" Hundred "+helper(num%100);
    }
};

int main() {
    int num = 1234567;
    Solution obj;
    string result = obj.numberToWords(num);
    cout << "Number in words: " << result << endl;
    return 0;
}