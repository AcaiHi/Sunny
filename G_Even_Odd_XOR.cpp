#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int x = 0, y = 0;
        for (int i = 0; i < n - 2; i++)
            x ^= i, y ^= i + 1;
        if (x){
            for (int i = 0; i < n - 2; i++)
                cout << i << ' ';
            cout << ((1ll << 31) - 1) << ' ' << (x ^ ((1ll << 31) - 1)) << endl;
        }else {
            for (int i = 1; i<= n - 2; i++)
                cout << i << ' ';
            cout << ((1ll << 31) - 1) << ' ' << (y ^ ((1ll << 31) - 1)) << endl;
        }
    }
}