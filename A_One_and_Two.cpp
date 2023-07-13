#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n], x[n], i = 0; for (int &it : q) cin >> it, x[i++] = it;
        for (int i = 0; i < n; i++){
            if (!i) {
                if (q[i] & 1) q[0] = 0;
                else q[0] = 1;
            }else {
                if (q[i] & 1) q[i] = q[i - 1];
                else q[i] = q[i - 1] + 1;
            }
        }
        int ans = lower_bound(q, q + n, q[n - 1] / 2) - q;
        if (ans == n || (q[n - 1] & 1)) cout << "-1\n";
        else cout << ans  + 1<< '\n';
    }
}