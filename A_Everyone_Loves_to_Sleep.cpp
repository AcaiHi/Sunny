#include<iostream>
using namespace std;
pair<int, int> solve(int h, int m, int H, int M){
    int x = 0; int y = 0;
    while (h != H || m != M) {
        m++;y++;
        if (m >= 60) m %= 60, h++, x++, y -= 60;
        h %= 24;
    }

    
    if (y < 0) y += 60, x--;
    // cout << h << ' ' << m << x << ' ' << y << endl;
    return make_pair(x, y);
}
int main(){
    int t; cin >> t;
    while (t--){
        int k, h, m; cin >> k >> h >> m;
        int mi = 0x7fffffff;
        int ans1, ans2;
        while (k--){
            int u, v; cin >> u >> v;
            pair<int, int> x(solve(h, m, u , v));
            if (x.first * 60 + x.second < mi){
                ans1 = x.first; ans2 = x.second;
                mi = x.first * 60 + x.second;
            }
        }
        // cout << "[][][][][]\n";
        cout << ans1 << ' ' << ans2 << endl;
    }
}