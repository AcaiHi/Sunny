#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
using PII = pair<int, int>;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int l = 0, r = 0;
        for (int i = 0, x, y; i < n; i++) {
            cin >> x >> y;
            if (x == k) l = k;
            if (y == k) r = k;
        }
        cout << (l && r ? "YES\n" : "NO\n");
    }
}