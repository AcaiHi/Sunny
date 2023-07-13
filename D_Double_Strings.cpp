#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        unordered_set<string> v;
        vector<string> ans(n);
        for (string &it : ans) 
            cin >> it, v.emplace(it);
        for (string &it : ans){
            bool f = 0;
            for (int i = 1; i < it.length(); i++){
                string x = it.substr(0, i), y = it.substr(i);
                if (v.count(x) && v.count(y)){
                    f = 1; break;
                }
            }
            cout << f;
        }
        cout << '\n';
    }
}