#include<iostream>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = s.length() - 1;
        set<int> use;
        while (l < r){
             
            if (s[l] != s[r]) use.insert(l);
            l++, r--;
        }
        int x = -1, f = 1;
        for (int u : use){
            if (x == -1) x = u;
            else if (x != u - 1) f = 0;
        }

        cout << (f ? "Yes\n" : "No\n");
    }
}