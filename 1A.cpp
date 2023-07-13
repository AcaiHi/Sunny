#include<iostream>
#include<map>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using PII = pair<int, int>;
using vi = vector<int>;


#define F first
#define S second

ll m, n, a, t, ans, cnt;

struct X{
    int x;
    X(int l) : x(l){};
};


struct node{
    int val;
    node *l, *r;
};

struct DSU{
    vector<int> f, siz;
    DSU(int n) : f(n), siz(n, 1) {iota(f.begin(), f.end(), 0);}
    int leader (int x){
        while (x != f[x]) x = f[x] = f[f[x]];
        return x;
    }
    bool same(int x, int y) {return leader(x) == leader(y);}
    bool merge(int x, int y) {
        x = leader(x), y = leader(y);
        return x == y ? 0 : siz[x] += siz[y], f[y] = x, 1;
    } 
    int size(int x) { return siz[leader(x)];}
};

void pre(node *u){
    (u ? (cout << u->val << ' '), pre(u->l), pre(u->r) : void());
}
int main(){

    // cin >> m >> n >> a;
    while (t < m) cnt += 1ll * 1, t += a;
    ans = cnt; t = cnt = 0;
    while (t < n) cnt += 1ll * 1, t += a;
    cout << ans * cnt;
    cout << __cplusplus;
    map<int, int> m;
    for (auto [x, y] : m) cout << x << ' ' << y;
    vector<int> x = {1, 2, 3, 3};
    cout << (ans ? "YES\n" : "NO\n");
    return 0;

}

