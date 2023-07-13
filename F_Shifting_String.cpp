#include<iostream>
#include<vector>
#include<set>
using namespace std;
// using PII = pair<char, ll>;
using ll = long long;

int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        string s; cin >> s;
        set<char> x(s.begin(), s.end());
        vector<ll> v(n);
        for (ll &it : v) cin >> it, it--;
        set<ll> ans;
        // cout << x.size() << ' ';
        auto gcd = [&](auto self, ll a, ll b) -> ll {
            return b ? self(self, b, (ll)a % b) : a;
        };

        // auto shift = [&]() -> bool {
        //     bool f = 1;
        //     string t; 
        //     for (int i = 0; ll it : v) {
        //         t += s[it];
        //         if (t[i] == tmp[i] && !ok.count(i++)) ok.insert(i - 1);
        //         else continue;
        //         ans.insert(cnt);
        //     }
        //     s = t;
        //     return ok.size() != n;
        // };
        auto lcm = [&](ll a, ll b) -> ll {
            return a * b / gcd(gcd, a, b);
        };
        // while (shift()) cnt++;
        vector<bool> vis(n);
        ll res = 1; 

        for (int i = 0; i < n; i++){
            if (vis[i]) continue;
            vis[i] = 1;
            string tmp; tmp += s[i];
            
            for (int idx = v[i]; !vis[idx]; idx = v[idx]){
                tmp += s[idx]; vis[idx] = 1;
            }
            cout << tmp.size() << ' ' << tmp << endl;
            string cycle = tmp + tmp;
            int len = tmp.size();
            for (int i = 1; i + len <= cycle.size(); i++)
                if (tmp == cycle.substr(i, len)){
                    res = lcm(res, i);
                    break;
                }
        }


        // for (ll x : ans) res = lcm(res , x), cout << x << ' ';
        cout << res << endl;
    }
}