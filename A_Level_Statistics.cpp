#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int f = 1;
        int w = 0, z = 0;
        for (int i = 0, x, y; i < n; i++){
            cin >> x >> y;
            if (w > x || (z < y && x - w < y - z) || z > y) f = 0;
            w = x, z = y;
        }
        cout << (f ? "YES\n" : "NO\n");
    }
}