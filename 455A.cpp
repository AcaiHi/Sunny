#include<iostream>
#include<map>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    ll q[n];
    map<ll, ll> m;
    for (ll &it : q) cin >> it, m[it]++;
    ll dp[(int)1e5 + 1][2] = {0};
    for (ll i = 1; i <= (int)1e5; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = max(dp[i - 1][0] + m[i] * i, dp[i - 1][1]);
    }

    cout << max(dp[(int)1e5][1], dp[(int)1e5][0]); 

}