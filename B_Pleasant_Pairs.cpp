#include<iostream>
#include<map>
using namespace std;
int t, n;
#define L begin()
#define R end()
#define F first
#define S second
int main(){
    cin >> t;
    while (t--){
        cin >> n; int q[n];
        int i = 1;
        map<int, int> m;
        for (int &it : q) 
            cin >> it, m[it] = i++;
        int cnt = 0;
        for (auto i = m.L; i != m.R; i++){
            if (i->F > 2 * n) break;
            int s = i->S - 1;
            for (auto x : m){
                if (i->F * x.F > 2 * n) break;
                if (i->F == x.F || i->S > x.S) continue; 
                if (i->S + x.S == i->F * x.F) cnt++;
            }
        }
        cout << cnt << '\n';
    }
}