#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int x = 1, y = 0, tt = 0;
        for (int i = 2; x + y < n; i++){
            if (tt >= 2)
                x += i;
            else 
                y += i;
            tt++;
            // cout << x << ' ' << y << endl;
            tt %= 4;
        }
        // cout << "=\n";
        if (x + y != n) tt >= 2 ? x += (n - x - y) : y += (n - x - y);
        cout << x << " " << y << '\n';
    }
}