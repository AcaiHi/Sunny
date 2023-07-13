#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
void init(vector<ll>& qry){
    qry.emplace_back(1);
    for (int i = 2; qry.back() <= 2 * (int)1e9; i++)
        qry.emplace_back(qry.back() + i);
}
int main(){
    int t; cin >> t;
    vector<ll> qry;
    init(qry);
    while (t--){
        int n, k; cin >> n >> k;
        int u = lower_bound(qry.begin(), qry.end(), k) - qry.begin();
        int L = qry[u], l = n - u - 2;
        vector<char> ans; ans.assign(n, 'a');
        ans[l++] = 'b';
        while (L-- != k && l++);
        ans[l] = 'b';
        for (char x : ans) cout << x;
        cout << endl;
    }
}