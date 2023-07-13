#include<iostream>
using namespace std;
bool cmp(string x){
    int l = 0, r = x.length() - 1, f = 1, L, R;
    for (; l + 1 < x.length() && x[l] != x[l + 1]; l++){
        L = l + 1;
    }
    for (; r > 0 && x[r] != x[r - 1]; r--){
        R = r - 1;
    }
    if (l >= r || l == x.length() || abs(l - r) == 1) f = 0;
    return f;
    
}
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        string x, y; cin >> x >> y;
        string tmp = x + string(y.rbegin(), y.rend());
        string tmp2 = y + string(x.rbegin(), x.rend());
        cout << (cmp(tmp) && cmp(tmp2)? "NO\n" : "YES\n");
    }
}