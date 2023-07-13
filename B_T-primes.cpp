#include<iostream>
#include<cmath>
#include<set>
#include<vector>
using namespace std;
using ll = long long;
const int N = 1e6 + 1;
set<ll> init(){
    vector<int> pt(N);
    for (int i = 2; i * i < N; i++){
        for (int j = i * i; j < N && !pt[i]; j += i)
            pt[j] = 1;
    }
    set<ll> res;
    for (int i = 2; i < N; i++)
        if (!pt[i]) res.insert(1ll * i * i);
    return res;
}
int main(){
    int t; cin >> t;
    set<ll> findp(init());
    while (t--){
        ll x; cin >> x;
        cout << (findp.count(x) ? "YES\n" : "NO\n");
    }
}