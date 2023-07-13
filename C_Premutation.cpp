#include<bits\stdc++.h>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        vector v(n, vector<int>(n - 1));
        vector<int> cnt(n);
        int x;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n - 1; j++)
                cin >> v[i][j], v[i][j]--;
            cnt[v[i][0]]++;
        }
        x = max_element(cnt.begin(), cnt.end()) - cnt.begin();
        for (int i = 0; i < n; i++){
            if (v[i][0] ^ x) {
                cout << x + 1;
                for (int it : v[i]) cout << " " << it + 1;
            }
        }
        cout << endl;
    }
}