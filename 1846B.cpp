#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--) {
        string g[3] = {};
        string s[3] = {};
        int ans = -1;
        for (auto &x : g) {
            cin >> x;
            if (x == "XXX") ans = 0;
            if (x == "OOO") ans = 1;
            if (x == "+++") ans = 2;
            int i = 0;
            for (auto &y : x) {
                s[i++] += y;
            }
        }
        if (ans == -1) {
            for (auto x : s) {
                // cout << x << ' ';
                if (x == "XXX") ans = 0;
                if (x == "OOO") ans = 1;
                if (x == "+++") ans = 2;
            }
        }
        if (ans == -1) {
            char l = g[0][0], r = g[0][2];
            for (int i = 0; i < 3; i++) {
                if (l != g[i][i]) l = ' ';
            }
            for (int i = 2; i >= 0; i--) {
                if (r != g[2 - i][i]) r = ' ';
                // cout << g[2 - i][i];
            }
            // cout << ' ' << l << ' ' << r << endl;
            char x = l != ' ' ? l : r;
            if (x == 'X') ans = 0;
            if (x == 'O') ans = 1;
            if (x == '+') ans = 2;

        }
        
        // cout << endl;
        cout << (ans == -1 ? "DRAW" : ans == 1 ? "O" : ans == 0 ? "X" : "+") << endl;
        
        
    }
}