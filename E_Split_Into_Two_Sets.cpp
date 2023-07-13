#include<bits/stdc++.h>
using namespace std;
struct DSU{
    vector<int> f, siz;
    DSU(int n) : f(n), siz(n, 1) {iota(f.begin(), f.end(), 0);}
    int leader(int x){
        while (x != f[x]) x = f[x] = f[f[x]];
        return x;
    }
    bool same(int x, int y) {return leader(x) == leader(y);}
    bool merge(int x, int y) {
        x = leader(x), y = leader(y);
        return (x == y ? 0 : (siz[x] += siz[y], f[y] = x));
    } 
    int size(int x) { return siz[leader(x)];}
};
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int f = 1;
        DSU d(n);
        vector<int> vis(n);
        int sum = 0;
        for (int i = 0; i < n; i++){
            int u, v; cin >> u >> v;
            sum += !d.merge(u - 1, v - 1);
            vis[u - 1]++, vis[v - 1]++;
        }
        for (int i = 0; i < n; i++){
            if (vis[i] != 2) f = 0;
            if (d.size(i) & 1) f = 0;
        }
        cout << (f? "YES\n" : "NO\n");
    }
}