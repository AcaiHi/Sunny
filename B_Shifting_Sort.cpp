#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int t, n;
string construct(int x, int y, int cnt){
    return to_string(x + 1) + " " + to_string(y + 1) + " " + to_string(cnt) + '\n';
}
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        vector<string> ans;
        for (int i = 0; i < n; i++){
            int l = i, r = i,  cnt = 0;
            for (int j = i + 1; j < n; j++)
                if (q[j] < q[r])
                    r = j;
            if (r > l){
                ans.push_back(construct(l, r, r - l));
                int tmp = q[r];
                for (int i = r; i > l; i--) q[i] = q[i - 1];
                q[l] = tmp;
            }
        }
        cout << ans.size() << endl;
        for (auto x : ans) cout << x;
    }
}