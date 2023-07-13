#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> q(n), ans(n);
        
        int x = 0, maxi = 0x7fffffff, i = 0, p;
        for (int &it : q) cin >> it;
        sort(q.begin(), q.end());
        for (int it : q) {
            if (x && maxi > abs(x - it)) p = i, maxi = abs(x - it);
            i++;
            x = it;
        }
        for (auto &x : ans){ 
            x = q[p++], p %= n;
        }
        if (n == 2) reverse(ans.begin(), ans.end());
        for (int x : ans) cout << x << ' ';
        cout << '\n';
    }
}