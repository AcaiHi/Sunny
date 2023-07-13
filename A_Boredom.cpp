#include<iostream>
#include<map>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int n; cin >> n;
    map<int, int> m;
    ll q[n]; for (ll &it : q) cin >> it, m[it]++;
    int v = (m.rbegin())->first;
    vector maxi(v + 1, vector<ll>(2));
    for (int i = 1; i <= v; i++){
        maxi[i][0] = max(maxi[i - 1][0], maxi[i - 1][1]);
        maxi[i][1] = (maxi[i - 1][0] + 1ll * i * m[i]);
    }
    cout << max(maxi.back()[0], maxi.back()[1]);
}