#include<iostream>
#include<map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, int> m;
        for (char x : s) {
            m[x]++;
        }
        int ans = 0;
        for (char i = 'a'; i <= 'z'; i++){
            ans += min(m[i], m[toupper(i)]);
            if (m[i] == m[toupper(i)] || !k) continue;
            else if (k) {

                int has = abs(m[i] - m[toupper(i)]) / 2;
                if (has >= k) ans += k, k = 0;
                else ans += has, k -= has;
            }

            // cout << m[i] << ' ' << i << endl;
        }

        cout << ans << '\n';
    }
}