#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        int l = 0, r = n - 1, x = 0, y = 0, res = 0;
        int tmpx, tmpy = 0;
        while (l <= r){
            tmpx = q[l++];
            while (l <= r && tmpx <= tmpy) tmpx += q[l++];
            res++;
            tmpy = 0;
            while (r >= l && tmpy <= tmpx) tmpy += q[r--];
            res += tmpy != 0;
            x += tmpx, y += tmpy;
        }
        cout << res << ' ' << x << ' ' << y << '\n';
    }
}