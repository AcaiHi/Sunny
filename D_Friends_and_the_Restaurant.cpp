#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll a[n], b[n];
        for (ll &it : a) cin >> it;
        for (ll &it : b) cin >> it;
        vector<ll> neg, piv;
        ll ze = 0;
        for (ll i = 0; i < n; i++) {
            ll r = b[i] - a[i];
            if (r < 0) neg.push_back(r);
            else if (r > 0) piv.push_back(r);
            else ze++;
        }
        sort(neg.rbegin(), neg.rend());
        sort(piv.begin(), piv.end());
        ll ans = 0;
        ll l = 0;
        int can = piv.size();
        for (ll x : neg){
            while (l < piv.size() && piv[l] + x < 0) l++;
            if (l == piv.size()) break;
            if (x + piv[l] >= 0) ans++, can--, l++;
            else break;
        }
        // cout << neg.size() << ' ' << piv.size() << ' ' << l << endl;;
        ans += (can + ze) / 2;
        cout << max(ans, (int)(ze + piv.size()) / 2ll) << endl;
    }
    return 0;
}