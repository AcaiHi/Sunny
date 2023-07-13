#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        ll q[n], res= 0, mnlen = n;
        for (ll &it : q) cin >> it, res += it;
        for (int i = n; i >= 2; i--){
            if (res % i) continue;
            ll mlen = 0, tmp = 0, s = 0;
            for (int j = 0; j < n; j++){
                if (tmp + q[j] == res / i){
                    mlen = max(mlen, j - s + 1);
                    tmp = 0; s = j + 1;
                }else if (tmp + q[j] < res / i) tmp += q[j];
                else {tmp = -1; break;}
            }
            if (!tmp) mnlen = min(mlen, mnlen);
        }
        cout << mnlen << '\n';
    }
}