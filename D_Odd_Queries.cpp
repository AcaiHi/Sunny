#include<iostream>
#include<map>
#include<vector>
using namespace std;
using ll = unsigned long long;
int main(){
    ll t; cin >> t;
    while (t--){
        ll n, Q; cin >> n >> Q;
        ll q[n];
        for (int i = -1; ll &it : q) {
            cin >> it; 
            if (++i) q[i] = q[i - 1] + it;
            else q[i] = it;
        }
        // ll p[n + 1] = {};
        // for (ll i = 1; i <= n; i++)
        //     p[i] = p[i - 1] + q[i - 1];
        while (Q--){
            ll x, y, k; cin >> x >> y >> k;
            // cout << y - 1 << ' ' << x << endl;
            ll z = q[y - 1];
            if (x - 2 != -1) z -= q[x - 2];
            if ((q[n - 1] - z +  ((y - x + 1) * k) * 1ll) & 1ll) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}