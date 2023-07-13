#include<iostream>
using namespace std;
using ll = long long;
int main(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    bool vis[265] = {};
    for (char x; k--; ) cin >> x, vis[x] = 1;
    ll res = 0, len = 0;
    for (char x : s){
        if (vis[x]) len += 1ll, res += 1ll;
        else if (len > 1) res += 1ll * len * (len - 1) / 2ll, len = 0;
        else len = 0;
    }
    res += len > 1 ? 1ll * len * (len - 1) / 2ll : 0;
    cout << res;
}