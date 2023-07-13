#include<iostream>

using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int vis[55] = {};
        int n, tar; cin >> n >> tar;
        int q[n]; for (int &it : q) cin >> it, vis[it] = 1;
        int maxi = *max_element(q, q + n);
        for (int i = 1; i <= maxi; i++)
            if (!vis[i]) tar -= i;

        while (tar > 0) tar -= ++maxi;
        if (tar) cout << "NO\n";
        else cout << "YES\n";
    }
}