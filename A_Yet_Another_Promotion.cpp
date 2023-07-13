#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        ll a, b, n, m; cin >> a >> b >> n >> m;
        ll res;
        if (n <= m) res = min(a * n, b * n);
        else {
            if (a <= b) res = (a * m) * (n / (m + 1)) + a * (n % (m + 1));
            else if (a * m <= b * (m + 1)) 
                res = (n / (m+ 1)) * (a * m) + b * (n  % (m + 1));
            else res = min(a * n, b * n);
        }
        cout << res << endl;
    }
}