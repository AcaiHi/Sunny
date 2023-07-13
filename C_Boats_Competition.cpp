#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        map<int, set<int>> m;
        for (int i = 0; i < n; i++){
            set<int> used;
            for (int j = i + 1; j < n; j++){
                if (m[q[i] + q[j]].count(i) || m[q[i] + q[j]].count(j)) continue;
                m[q[i] + q[j]].insert(i);
                m[q[i] + q[j]].insert(j);
            }
        }
        int maxi = 0;
        for (auto [x, y] : m){
            maxi = max(maxi, (int)(y.size() / 2));
        }

        cout << maxi << '\n';
    }
}