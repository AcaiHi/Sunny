#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        map<int, int> m;
        for (int x; n--; ) cin >> x, m[x]++;
        int res = 0; auto l = m.begin();
        int now = m.begin()->second;
        while (m.end() != l){
            if (now >= l->first) res++, now -= l->first;
            else l++, now += l != m.end() ? l->second : 0;
        }
        cout << res << '\n';
    }
}