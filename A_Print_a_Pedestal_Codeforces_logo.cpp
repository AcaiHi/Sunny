#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        n -= 6;
        int a = 1 + n / 3, b = 2 + n / 3, c = 3 + n / 3;
        if (n % 3){
            if (n % 3 >= 1) c++;
            if (n % 3 >= 2) b++;
        }
        cout << b << ' ' << c << ' ' << a << endl;
    }
}