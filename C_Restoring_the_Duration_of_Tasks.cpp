#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<PII> ans(n);
        for (int i = 0; auto &[x, y] : ans){
            cin >> x;
        }
        for (int i = 0; auto &[x, y] : ans){
            cin >> y;
            if (i && x < ans[i - 1].second) x = ans[i - 1].second;
            i++; 
        }
        for (auto [x, y] : ans) cout << y - x << ' ';
        cout << endl;
    }
}