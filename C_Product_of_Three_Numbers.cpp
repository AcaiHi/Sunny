#include<iostream>
#include<set>
using namespace std;
using ll = long long;
ll val(int x, int y = 0, int z = 0){
    y = y ? : x + 1; z = z ? : y + 1;
    return 1ll * x * (y) * (z);
}
int main(){
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        set<int> x;
        for (int i = 2; val(i) <= n; i++){
            for (int j = i + 1; val(i, j) <= n; j++){
                if (n % (i * j) == 0) {
                    x.insert(i); x.insert(j), x.insert(n / i / j);
                    break;
                }
            }
            if (x.size()) break;
        }
        if (x.size() == 3) {
            cout << "YES\n";
            for (int u : x) cout << u << ' ';
            cout << endl;
        }else cout << "NO\n";
    }
}