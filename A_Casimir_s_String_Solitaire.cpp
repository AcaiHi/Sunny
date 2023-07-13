#include<bits\stdc++.h>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while (t--){
        string s; cin >> s;
        map<char, int> m;
        for (char x : s){
            m[x]++;
        }
        cout << (m['B'] - m['C'] == m['A']? "YES\n" : "NO\n");
    }
}