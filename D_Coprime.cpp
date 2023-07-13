#include<iostream>
#include<map>
using namespace std;
using ll = long long;
ll gcd(ll x, ll y){
    return y ? gcd(y, x % y) : x;
}
int main(){
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        map<ll, ll> m;
        for (ll i = 1, x; i <= n; i++){
            cin >> x;
            m[x] = i;
        }
        ll maxi = -1;
        for (auto [w, x] : m)
            for (auto [y, z] : m)
                if (gcd(w, y) == 1) 
                    maxi = max(maxi, z + x);
        cout << maxi << endl;
    }
}