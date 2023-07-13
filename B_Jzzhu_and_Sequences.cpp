#include<iostream>
#include<set>
#include<vector>
using namespace std;
using ll = long long;
const long long mod = 1e9 + 7;
int MOD(int x){
    return (mod + x) % mod;
}
int main(){
    int x, y, n; cin >> x >> y >> n;
    x = (mod + x) % mod, y = (y + mod) % mod;
    vector<int> ans = {x, y, MOD(y - x), MOD(-x), MOD(-y), MOD(-y+x)};
    cout << ans[(n  - 1)% ans.size()];
}