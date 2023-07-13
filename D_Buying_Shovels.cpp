#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k, ans; cin >> n >> k;
        ans = n;
        for (int i = 1; i * i <= n; i++){
            if ((n % i) == 0) 
                if ((n / i) <= k) ans = min(ans, i);
                else if (i <= k) ans = min(ans, n / i);
            
        }
        cout << ans << '\n';
    }
}