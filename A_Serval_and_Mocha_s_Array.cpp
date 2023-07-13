#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        int f = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++)
                maxi = gcd(q[j], q[i]) <= 2 || maxi;
        }

        cout << (maxi ? "Yes\n" : "No\n");
    }
}