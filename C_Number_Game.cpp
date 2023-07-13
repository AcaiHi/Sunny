#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;

        // cout << n << ' ';
        if (n == 1){
            cout << "FastestFinger\n";
        }else if (n & 1){
            cout << "Ashishgup\n";
        }else if (n != 2){
            int even = 0;
            while (n % 2 == 0) n /= 2, even++;
            int res = n == 1 ? 0 : 1, tmp = n;
            for (int i = 3; i <= sqrt(n) && tmp > 1 && res < 2; i+=2)
                while (tmp % i == 0) tmp /= i, res++;
            if ((res > 1 && even == 1) || (even > 1 && res >= 1)) cout << "Ashishgup\n";
            else cout << "FastestFinger\n";
        }else cout << "Ashishgup\n";
    }
}