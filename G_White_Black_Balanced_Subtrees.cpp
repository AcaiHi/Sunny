
#include<iostream>
#include<vector>
using namespace std;
using G = vector<vector<int> > ;
using PII = pair<int, int>;
vector<pair<int, int> > siz;
#define W first
#define B second
G graph; string wb;
PII dfs(int x, int pr){
    // cout << x << ' ';
    wb[x] == 'W' ? siz[x].W++ : siz[x].B++;
    for (auto u : graph[x]){
        if (u != pr) {
            PII get = dfs(u, x);
            siz[x].W += get.W;
            siz[x].B += get.B;
        }
    }

    return siz[x];
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        graph = G(n + 1, vector<int>());
        siz = vector<PII>(n + 1);
        for (int i = 2, x; i <= n; i++)
            cin >> x, graph[x].push_back(i);
        cin >> wb; wb = '#' + wb;
        dfs(1, -1);
        int ans = 0;
        for (int i = 1; i <=n; i++)
            ans += siz[i].W == siz[i].B;
        cout << ans << '\n';
    }
}