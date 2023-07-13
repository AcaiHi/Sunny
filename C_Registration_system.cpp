#include<iostream>
#include<unordered_map>
using namespace std;

int Hash(string S) {
    const int b = 131, p = 1'000'000'007;
    int ans = 0;
    for (char c : S) ans = (ans * b + c) % p;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;
    unordered_map<int, int> ans;
    while (n--){
        string x; cin >> x;
        int res = Hash(x);
        if (ans.find(res) != ans.end()) cout << x << ans[res];
        else cout << "OK";
        ans[res]++;
        cout << '\n';
    }
}