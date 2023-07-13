#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

using ll = long long;
using PLL = pair<ll, ll>;
#define X first
#define H second
int main(){
    int n; cin >> n;
    map<ll, ll> m;
    vector<PLL> q(n);
    for (PLL &it : q) cin >> it.X >> it.H;
    int res = n >= 2 ? 2 : n;
    for (int i = 1; i < n - 1; i++){
        if (q[i].X - q[i].H > q[i - 1].X) res++;
        else if (q[i].X + q[i].H < q[i + 1].X) res++, q[i].X += q[i].H;
    }
    cout << res << endl;
}