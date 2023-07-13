#include<iostream>
#include<set>
using namespace std;
int t, n;
int M = 1e9;
int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b){
    return a * (b / gcd(a, b));
}
bool solve(int x, int y){
    // while (x % y == 0) x /= y;
    return x == 1;
}
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        bool f = 0, ax, ay;
        int mid = n / 2;
        for (int i = mid; i < n - 1; i++){
            int j = n - i;
            int x = gcd(i, j);
            if (x != 1 && n % x == 0) cout << i << " " << j << endl;   
            /*int x = i, y = j;
            int gg[2] = {}, l = 1;
            for (int &it : gg) {
                it = gcd(x, y), x /= it, y /= it;
                if (it == 1) l = 0;
            }
            cout << gg[1] << " " << gg[0] << endl;*/
            /*if (l){
                int _1 = 1, _2 = 1;
                _1 = x % gg[1] ? solve(x, gg[0]) : solve(x, gg[1]);
                _2 = y % gg[0] ? solve(y, gg[1]) : solve(y, gg[0]);
                if (_1 && _2) {cout << gg[0] << " " << gg[1] << endl; break;}
            }*/
        }
        if (f) cout << ax << " " << ay << endl;
        else cout << "-1\n";
    }
}