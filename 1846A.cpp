#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 0;
        pair<int, int> q[n];
        for (auto [x, y] : q) {
            cin >> x >> y;
            if (x > y) ans++;
        }
        cout << ans << endl;

    }
}