#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int x = 1, y = n - 1;
        for (int i = 2; i <= (int)sqrt(n) + 1; i++){
            if (n % i) continue;
            x = n / i, y = n - n / i;
            break;
        }
        cout << x << ' ' << y << endl;
    }
}