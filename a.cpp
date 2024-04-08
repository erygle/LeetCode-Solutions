#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    vector<int>arr = {118,223,121,181,154,199,89,247,244,78,5,4,225,151,79,123,249,16,11,60,78,131,77,249,249,47,138,92,215,245,21,216,114,131,229,28,8,39,172,4};
    //arrayin alfabedeki harf sayısına göre modunu al ve sonra 0. indexi a'dan başlatarak sonucu yazdır
    //türkçe alfabeye göre değerlendirme yapılacak

    vector<int>mod;
    for(int i=0;i<arr.size();i++){
        mod.push_back(arr[i]%29);
    }
    for(int i=0;i<mod.size();i++){
        cout<<(char)(mod[i]+97);
    }
    

    return 0;
}
