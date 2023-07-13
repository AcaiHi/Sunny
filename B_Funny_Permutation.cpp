#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int q[n], mx = n, af = 1;
        for (int i = 0; i < n; i++){
            q[i] = mx--;
            if (i + 1 == q[i]) 
                if (i - 2 == 0) swap(q[0], q[i]);
                else swap(q[i - 1], q[i]);
        }
        for (int i = 0; i < n; i++){
            if (i && abs(q[i - 1] - q[i]) == 1) continue;
            if (i + 1 < n && (abs(q[i + 1] - q[i]) == 1)) continue;
            af = 0; break;
        }
        if (af) {for (int i : q) cout << i << " "; cout << '\n';}
        else cout << "-1\n";
    }
}