#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, q[3];
    cin >> n >> q[0] >> q[1] >> q[2];
    int ans = 0;
    sort(q, q + 3);
    for (int i = n / q[0]; i >= 0; i--){
        int x = q[0] * i;
        for (int j = (n - x) / q[1]; j >= 0; j--){
            int y = (q[1] * j);
            for (int k = (n- (x + y)) / q[2]; k >= 0; k--){
                if ((x + y + (q[2] * k)) == n){
                    ans = max(i + j + k, ans);
                    break;
                }
            }
        }
    }
    cout << ans;
}