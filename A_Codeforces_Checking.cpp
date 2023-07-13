#include<iostream>
using namespace std;

int main(){
    int t; cin >> t;
    string s = "codeforces";
    bool vis[1000000] = {};
    for (int i = 0; i < s.length(); i++) vis[s[i]] = 1;
    while (t--){
        char x; cin >> x;
        cout << (vis[x] ? "YES\n" : "NO\n");
    }
}