#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
using ll = long long;

signed main(){
  ll t;
  cin >> t;
  while (t--) {
    ll n, m, h; cin >> n >> m >> h;
    ll q[n][m];
    for (auto &x : q)
        for (auto &y : x)
            cin >> y;
    ll cnt[n] = {};
    ll pad[n] = {};
    for (ll i = 0; i < n; i++){
        sort(q[i], q[i] + m);
        ll maxi = 0;
        for (ll j = 0; j < m; j++)
            if (maxi + q[i][j] <= h)
                cnt[i]++, pad[i] += q[i][j] + maxi, maxi += q[i][j];
    }
    ll ans = 1;
    for (ll i = 1; i < n; i++){
        ans += cnt[i] > cnt[0] ?: cnt[i] == cnt[0] && pad[i] < pad[0] ? :0;
        // cout << cnt[i] << ' ' << pad[i] << endl;
    }
    cout << ans << endl;
  }
}

