#include<iostream>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        int q[n], cnt[10] = {}; 
        for (int &it : q){
            string x; cin >> x;
            it = x[x.length() - 1] - '0';
            cnt[it]++;
        }
        int f = 0;
        for (int i = 0; i < 10 && !f; i++){
            if (!cnt[i]) continue;
            cnt[i]--;
            int sum = 0;
            for (int j = 0; j <= 9 && !f; j++){
                if (!cnt[j]) continue;
                --cnt[j];
                for (int k = 0; k <= 9 && !f; k++)
                {
                    int x = i + j + k;
                    if (x % 10 != 3) continue; 
                    if (cnt[k]) {
                        f = 1; break;
                        cout << i << " " << j << " " << k << endl;
                    }
                }
                ++cnt[j];
            }
            ++cnt[i];
        }
        cout << (f ? "YES\n" : "NO\n");
    }
}