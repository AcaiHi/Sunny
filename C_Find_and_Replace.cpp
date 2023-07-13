#include<iostream>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        set<char> x, y;
        bool f = 1;
        for (int i = 0; char u : s){
            if (((i & 1) && x.count(u)) || (!(i & 1) && y.count(u)))
                f = 0;
            if (i & 1) y.insert(u);
            else x.insert(u);
            i++;
        }

        cout << (f ? "YES\n" : "NO\n");
    }
}