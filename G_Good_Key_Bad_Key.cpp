#include<iostream>
using namespace std;
using ll = long long;
#define bd(x, y) min(x, (long long)y)
int main(){
    ll t; cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        ll maxi = 0;
        ll q[n]; for (ll &it : q) cin >> it, maxi += it - k;
        int bound = min(n, 32ll);
        ll good = 0;
        for (int i = 0; i < n; i++){
            ll tail = q[i] >> 1;
            for (int j = i + 1; j < bd(n, i + 32); j++){
                tail += q[j] >> ((j - i + 1) * 1ll);
            }
            maxi = max(maxi, good + tail);
            good += q[i] - k;
        }

        cout << max(maxi , good) << endl;
    }
}