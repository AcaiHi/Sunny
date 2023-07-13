#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
using ll = long long;
int main(){
    int n, t; cin >> n; t =n;
    map<int, ll> m;
    while (t--){
        int x; cin >> x;
        m[x]++;
    }
    auto x = --m.end(), y = m.begin();
    ll ans = x == y ? 1ll * n * (n - 1) / 2 : 1ll * x->second * y->second;
    cout <<  x->first - y->first << ' ' << ans;
}