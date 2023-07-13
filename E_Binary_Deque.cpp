#include<iostream>
#include<vector>
using namespace std;
int t, n, k;
int main(){
    cin >> t;
    while (t--){
        cin >> n >> k;
        vector<int> in;
        int q[n], time = 0;
        for (int &it : q){
            cin >> it;
            if (it) in.push_back(time);
            time++;
        }
        int l = 0, r = 0;
        int sum = in.size() - k, res = 0x7fffffff;
        for (int i = 0; i <= sum; i++){
            if (i != sum ) r = n - in[in.size() - (sum - i)];
            if (i) l = in[i - 1] + 1;
            res = min(res, l + r);
            l = r = 0;
        }
        cout << (sum >= 0 ? res : -1) << '\n';
    }
}