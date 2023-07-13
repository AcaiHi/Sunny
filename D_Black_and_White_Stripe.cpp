#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        ll wds = 0, res = 0, ans = n;
        for (int i = 0; i < n;){
            ll j = i;
            while (wds != k && j < n) {
                wds++;
                if (s[j++] == 'W') res++;
            }
            if (wds != k) break;
            // cout << res << ' ';
            ans = min(ans, res);
            if (s[j - wds] == 'W') res--;
            wds--;
            i = j;
        }
        cout << ans << '\n';
    }
}