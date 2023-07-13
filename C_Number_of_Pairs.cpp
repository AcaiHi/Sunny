#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        int n, L, R; cin >> n >> L >> R;
        int q[n]; for (int &it : q) cin >> it;
        sort(q, q + n);
        ll res = 0;
        for (int i = n - 1; i >= 1; i--){
            int l = -1, r = i - 1;
            l = lower_bound(q, q + (i - 1), L - q[i]) - q;
            r = upper_bound(q, q + (i - 1), R - q[i]) - q;
            if (q[r] > R - q[i] ) r--;
            // cout << q[i] << ' ' << l << ' ' << r << endl;
            if (i == l) continue;
            if (r == -1 || q[l] + q[i] < L || q[i] + q[r] > R) continue;
            res += (r - l + 1);

        }
        cout << res << endl;
    }
}