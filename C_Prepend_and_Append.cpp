#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n - 1, f = 0;
        while (l <= r){
            if (s[l] != s[r] && l != r) {}
            else {f = r - l + 1; break;}
            l++, r--;
        }
        cout << f << '\n';
    }
}