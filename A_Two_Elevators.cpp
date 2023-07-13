#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        int a, b, c; cin >> a >> b >> c;
        ll x = (abs(a - 1)), y = 0; 
        if (c == 1) y = abs(b - c);
        else y = abs(b - c)* 1ll + abs(c - 1) * 1ll;
        if (x < y) cout << "1\n";
        else if (x > y) cout << "2\n";
        else cout << "3\n";

    }
}