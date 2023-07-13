#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll a[n]; for (ll &it : a) cin >> it;
        ll b[n]; for (ll &it : b) cin >> it;
        ll dis = 0;
        ll f = 1;
        for (int i = 0; i < n; i++)
            if (a[i] >= b[i]) dis = max(a[i] - b[i], dis);
            else f = 0;
        for (int i = 0; i < n && f; i++)
            a[i] = max(0ll, a[i] - dis);
        for (int i = 0; i < n; i++)
            if (a[i] != b[i]) f = 0;
        cout << (f ? "YES\n" : "NO\n");
    }
}