#include<iostream>
#include<vector>
#include<algorithm>
// #include<cstring>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        ll n, c, d; cin >> n >> c >> d;
        vector<ll> base(n), q(n), v(d + 2);
        for (ll &it : q) cin >> it;
        sort(q.rbegin(), q.rend());
        int l = 0, r = d + 2;
        while (l < r) {
            int mid = l + (r - l + 1) / 2;
            ll sum = 0;
            for (int i = 0; i < d; i++) 
                if (i % mid < n) sum += q[i % mid];
            if (sum >= c) l = mid;
            else r = mid - 1;
            cout << sum << ' ' << mid << '\n';
        }
        cout << ((l == d + 2) ? "Infinity" : !l ? "Impossible" : to_string(l - 1)) << endl;
    }
    // char s[256]; scanf("%s", s); 
    // int l = 0, r = strlen(s) - 1, f = strlen(s) % 2 == 0;
    // while (l < r) if (s[l++] != s[r--]) f = 0;
    // if (f) printf("YES");
    // else printf("NO"); 
}