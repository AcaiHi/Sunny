#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<numeric>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
#define dis first
#define id second 
int main(){

    ll n, m; cin >> n >> m;
    vector G(n, vector<PII>());
    for (ll i = 0; i < m; i++){
        int v, u, w;
        cin >> v >> u >> w;
        v--, u--;
        G[v].emplace_back(u, w);
        G[u].emplace_back(v, w);
    }
    vector<ll> dist(n, 1e18); vector<bool> vis(n);
    priority_queue<PII> pq;
    vector<int> path(n);
    pq.push(make_pair(0, 0));
    dist[0] = 0;
    iota(path.begin(), path.end(), 0);
    while (pq.size()){
        PII t = pq.top(); pq.pop();
        if (vis[t.id]) continue; vis[t.id] = 1;
        
        for (auto [x, y] : G[t.id]){
            if (vis[x]) continue;
            if (dist[x] > dist[t.id] + y){
                path[x] = t.id;
                dist[x] = dist[t.id] + y;
                pq.push(make_pair(-dist[x], x));
            }
        }
    }
    vector<int> ans(1, n);
    int i = n - 1;
    while (path[i] != i){
        i = path[i]; 
        ans.push_back(i + 1);
    }
    reverse(ans.begin(), ans.end());
    if (dist.back() != 1e18)
        for (int x : ans) cout << x << ' ' ;
    else cout << -1;
}
