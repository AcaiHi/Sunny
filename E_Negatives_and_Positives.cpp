#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        ll x = 0, y = 0, res = 0, tt = 0x3f3f3f3f3f3f3f3f, f = 0;
        for (int &it : q) {
            res += abs(it);
            if (it < 0) x++;
            tt = min(tt, 1ll*abs(it));
        }
        cout << res - (tt * 2 * (x & 1)) << '\n';
         
    }
}