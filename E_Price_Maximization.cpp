#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        ll res = 0;
        for (ll &it : v){
            cin >> it, res += it / k, it %= k;
        }
        sort(v.begin(), v.end());
        for (int l = 0, r =  n - 1; l < r; l++, r--){
            while (v[l] + v[r] < k && l < r) l++;
            if (l == r) break;
            res++;
        }
        cout << res << endl;
    }
}