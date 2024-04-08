//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
unordered_map<ll, ll> dp;

ll f(ll n) {
    if (dp[n]) 
        return dp[n];
    for (ll i = 1; i * i <= n; i++) {
        if (!(n % i)) {
            if(i*i==n || i==1)
                dp[n] += f(i);
            else
                dp[n] += f(i)+f(n/i);
        }
    }
    return dp[n];
}

int main() {
    ll n;
    cin >> n;
    dp[1] = 1;
    if (n < 2) {
        cout << 1;
        return 0;
    }
    ll sum = f(n);
    cout << sum;
    return 0;
}