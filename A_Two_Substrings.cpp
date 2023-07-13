#include<iostream>
#include<set>
using namespace std;
int main(){
    string s; cin >> s;
    set<string> used;
    string tmp;
    int f = 0;
    for (int i = 0; i + 1 < s.length() && !f; i++){
        string res = s.substr(i, 2);
        if ((res == "AB" || res == "BA") && used.count(res)) f = 1;
        used.insert(tmp); tmp = string(res.rbegin(), res.rend());
    }
    cout << (f ? "YES\n" : "NO\n");
}