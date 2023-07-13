#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        int l = 0, r = n - 1, f = 0, x = 1, y = n;
        while (x < y && l < r){
            if (x == q[l]) l++, x++;
            else if (y == q[l]) l++, y--;
            else if (x == q[r]) r--, x++;
            else if (y == q[r]) r--, y--;    
            else break;
        }
        if (l >= r || x >= y) cout << "-1\n";
        else cout << l + 1<< ' ' << r + 1 << endl;
    }
}