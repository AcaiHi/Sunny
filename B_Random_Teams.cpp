#include<iostream>
using namespace std;
using ll = long long;
ll comb(ll x){
    return 1ll * x * (x - 1) / 2ll;
}
int main(){
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    ll u = n / m;
    ll v = n % m;
    ans = comb(u) * (m - v) + comb(u + 1) * v;
    cout << ans << ' ' << comb(n - m + 1); 
}