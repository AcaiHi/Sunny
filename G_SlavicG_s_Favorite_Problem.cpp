#include<iostream>
#include<vector>
#include<set>
using namespace std;
using PII = pair<int, int>;
using graph = vector<vector<PII> >;

int main(){
    int t; cin >> t;
    while (t--){
        int n, a, b; cin >> n >> a >> b;
        set<int> s;
        vector G(n + 1, vector<PII>());
        while (--n){
            int v, u, w;
            cin >> v >> u >> w;
            G[v].emplace_back(u, w);
            G[u].emplace_back(v, w);
        }
        auto setv = [&](auto self, int x, int pr, int w) -> void {
            s.insert(w);
            for (auto [u, nx] : G[x])
                if (u != pr && u != b) 
                    self(self, u, x, w ^ nx);
        };
        auto dfs = [&](auto self, int x, int pr, int w) -> bool {
            if (x != b && s.count(w)) return true;
            for (auto [u, nx] : G[x]) 
                if (u != pr && self(self, u, x, nx ^ w)) return true;
            return false; 
        };
        setv(setv, a, -1, 0);
        cout << (dfs(dfs, b, -1, 0)? "YES\n" : "NO\n");
    }
}