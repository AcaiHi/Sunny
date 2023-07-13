#include<iostream>
#include<cmath>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        ll q[n]; for (ll &it : q) cin >> it;
        ll mi = 0, tmpm = 0;
        for (int i = 0; i + 1 < n; i++){

            if (q[i + 1] < q[i])
                mi = max(q[i] - q[i + 1], mi), q[i + 1] = q[i];
        }
        // cout << mi << ' ' << (log(mi) / log(2)) << ' ';
        int res = (int)(log(mi) / log(2));
        if (mi) cout << res + 1 << endl;
        else cout << "0\n";
    }
}