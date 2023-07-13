#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        for (char &x : s) x = tolower(x);
        string ans;
        for (int x : s){
            if (ans.empty() || ans.back() != x) ans += x;
            
        }

        cout << (ans == "meow" ? "YES\n" : "NO\n");
    }
}