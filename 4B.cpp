#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
using ll = long long;
using PII = pair<pair<int, int>, int>;
#define e first.first
#define s first.second
#define id second
int main(){
    int n, d; cin >> n >> d;
    PII q[n];
    for (PII &x : q) {
        cin >> x.e >> x.s;
        x.id = &x - &q[0]; 
    }
    int res = 0;
    int list[n] = {};
    for (auto x : q) {
        res += x.e;
        list[x.id] = x.e;
    }
    // cerr << res << endl;
    if (d == res) {
        cout << "YES\n";
        for (auto x : list) cout << x << ' ';
        return 0;
    }
    if (d < res) {
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < n && d != res; i++){
        if (res + q[i].s - q[i].e <= d){
            res += q[i].s - q[i].e;
            list[i] = q[i].s;
        }else {
            list[i] += d - res;
            res = d;
        }
    }

    if (res == d) {
        cout << "YES\n";
        for (auto x : list) cout << x << ' ';
    }
    else cout << "NO\n";
}
