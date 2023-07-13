#include<iostream>
#include<vector>
#include<map>
using namespace std;
using ll = long long;
#define x first
#define y second
int main(){
    ll t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll q[n]; for (ll &it : q) cin >> it;
        map<ll, ll> m; m[-1] = 1;
        for (ll it : q) {
            if (it % k != 0) {
                m[k * (it / k + 1) - it]++;
            }
        }
        for (auto &u : m) {
            if (u.y != 1) {
                m[u.x + k] = u.y - 1;
            }
        }
        cout << (m.rbegin()->first + 1) << endl;
    }
}