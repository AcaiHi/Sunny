#include<iostream>
#include<vector>
#include<map>
using namespace std;
using PII = pair<int, pair<int, int>>;
#define SC second
#define POS first
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<PII> v;
        for (int i = 1; i <= n; i++){
            int x; cin >> x;
            if (v.empty() || v.back().first != x){
                v.emplace_back(x, make_pair(i, 1));
            }else v.back().second.second++;
        }
        int maxi = 0;
        map<int, pair<int, int> > m;
        map<int, int> ST;
        PII ans;
        for (auto [x, y] : v){
            if (maxi < y.SC){
                maxi = y.SC;
                ans.first = x;
                ans.second.first = y.POS;
                ans.second.second = y.POS + y.SC;
            }
            if (m.find(x) == m.end()) 
                m[x] = make_pair(y.POS + y.SC, y.SC), ST[x] = y.POS;
            else if (m[x].POS + m[x].SC < y.POS){
                if (maxi < m[x].SC) 
                    maxi = m[x].SC, ans.first = x, ans.second.first = ST[x], ans.second.second = m[x].POS;
                m[x] = make_pair(y.POS + y.SC, y.SC), ST[x] = y.POS;
            }else {
                if (maxi < m[x].SC) 
                    maxi = m[x].SC, ans.first = x, ans.second.first = ST[x], ans.second.second = m[x].POS;
                m[x].SC = m[x].SC - (y.POS - m[x].POS) + y.SC, m[x].POS = y.POS + y.SC;
            }
        }

        for (auto [x, y] : m){
            if (maxi < y.SC) {
                maxi = y.SC;
                ans.first = x;
                ans.second.first = ST[x];
                ans.second.second = y.POS;
            }
        }
        cout << ans.first << ' ' << ans.second.first << ' ' << ans.second.second - 1 << '\n';
    }
}