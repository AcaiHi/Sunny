#include<iostream>
#include<bitset>
#include<iomanip>
using namespace std;
#define neg second
#define piv first
#define dout cout << fixed << setprecision(12)
int main(){
    string s, t; cin >> t >> s;
    pair<int, int> pt;
    int div = 0;
    for (char x : t)
        if (x == '+') pt.piv++;
        else pt.neg++;
    for (char x : s)
        if (x == '+') pt.piv--;
        else if (x == '-') pt.neg--;
        else div++;
    if (pt.piv < 0 || pt.neg < 0) dout << 0.0;
    else if (!div) dout << 1.0;
    else {
        int ans = 0;
        for (int i = 0; i < (1 << div); i++){
            bitset<10> res(bitset<10>(i).to_string());
            if (res.count() == pt.piv) ans++;
        }
        dout << (ans * 1.0) / (1 << div);
    }
}