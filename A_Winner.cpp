#include<iostream>
#include<map>
#include<vector>
using namespace std;
using PSI = pair<string, int>;
int main(){
    int n; cin >> n;
    map<string, int> m;
    map<string, int> sco;
    vector<PSI> q;
    int maxi = 0x8fffffff;
    string win;
    for (int i = 0; i < n; i++){
        string x; int sc;
        cin >> x >> sc;
        q.emplace_back(x, sc);
        sco[x] += sc;

    }

    for (auto [x, y] : sco) maxi = max(maxi, y);
    for (auto [x, y] : sco) {
        if (y == maxi) m[x] = 0;
    }
    for (auto [x, y] : q) {
        if (m.find(x) == m.end()) continue;
        m[x] += y;
        if (m[x] >= maxi) {cout << x; return 0;}
    }
    cout << win;
    
}