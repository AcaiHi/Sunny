#include<iostream>
#include<set>
#include<queue>
using namespace std;
using ll = long long;
ll solve(){
    int l, r, x; cin >> l >> r >> x;
    int a, b; cin >> a >> b;
    if (a == b) return 0;
    if (a > b) swap(a, b);
    if (b - a >= x) return 1;
    if (r - b >= x || a - l >= x) return 2;
    if (b - l >= x && r - a >= x) return 3;
    return -1;
}
int main(){
    int t; cin >> t;
    while (t--){
        cout << solve() << '\n';
    }
}