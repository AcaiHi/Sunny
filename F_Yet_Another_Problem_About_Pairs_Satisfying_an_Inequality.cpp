#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using PII = pair<int, int>;
using ll = long long;
#define id first
#define val second
int t, n;
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        vector<PII> q(n);
        vector<int> can, pos;
        int i = 1;
        for (PII &it : q){
            cin >> it.val; it.id = i++;
            if (it.val < it.id) can.emplace_back(it.id), pos.emplace_back(it.val);
        }
        sort(pos.begin(), pos.end());
        ll res = 0;
        for (int it : can){
            int P = upper_bound(pos.begin(), pos.end(), it) - pos.begin();
            res += can.size() - P;
        }
        cout << res << endl;
    }
}