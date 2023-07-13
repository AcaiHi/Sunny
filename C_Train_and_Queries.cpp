#include<iostream>
#include<map>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        map<int, pair<int, int>> m;
        for (int x, i = 0; i < n; i++){
            cin >> x;
            if (m.find(x) == m.end()) {
                m[x].first = i, m[x].second = i;
                continue;
            }
            m[x].first = i;
        }

        while (k--){
            int l, r; cin >> l >> r;
            if (m.find(l) != m.end() && m.find(r) != m.end() && m[l].second < m[r].first)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
}