#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        int now = 0;
        for (int i = 0; i < min(31, n); i++){
            int maxi = 0, id = -1;
            for (int j = i; j < n; j++)
                if ((now | q[j]) > maxi)
                    maxi = (now | q[j]), id = j;
            now |= q[id];
            // cout << 
            swap(q[i], q[id]);
        }
        for (int x : q) cout << x << ' '; cout << endl;
        // solve();
    }
}