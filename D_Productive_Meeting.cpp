#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
using PSS = pair<pair<ll, ll>, ll>;
#define endl '\n'
#define cout(x, y) cout << x << ' ' << y << endl;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        priority_queue<PII> pq;
        for (ll i = 1; i <= n; i++){
            ll x; cin >> x;
            if (x) pq.emplace(x, i);
        }
        vector<PII> ans;  
        while (pq.size() >= 2){
            auto x = pq.top(); pq.pop();
            auto y = pq.top(); pq.pop(); 
            ans.emplace_back(x.second, y.second);
            if (--x.first) pq.emplace(x.first, x.second); 
            if (--y.first) pq.emplace(y.first, y.second); 
        }


        cout << ans.size() << endl;
        for (auto [x, y] : ans){
            cout(x, y);
        }

    }
}
