#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        vector<int> v(2), pre(2);
        string s; cin >> s;
        for (char x : s) v[x - '0']++;
        int ans = min(v[0],v[1]);
        for (char x : s){
            v[x - '0']--; pre[x - '0']++;
            ans = min({ans, pre[0] + v[1], pre[1] + v[0]});
        }
        cout << ans << '\n';
    }
}