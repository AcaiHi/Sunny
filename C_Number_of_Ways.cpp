#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    ll q[n], cnt[n + 1] = {}, s = 0, target = 0;
    for (ll &it : q) cin >> it, target += it;
    if (target % 3) {
        cout << 0;
        return 0;
    }
    target /= 3;
    for (int i = n - 1; i >= 0; i--)
        cnt[i] = ((s += q[i]) == target) + cnt[i + 1];
    ll ans = 0;
    for (int i = s = 0; i + 2 < n; i++)
        ans += cnt[i + 2] * ((s += q[i]) == target);
    cout << ans << endl;
}