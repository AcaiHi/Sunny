#include<iostream>
using namespace std;
using PII = pair<int, int>;
#define val first
#define typ second
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        PII q[n]; 
        for (PII &it : q) cin >> it.val;
        for (PII &it : q) cin >> it.typ;
        int ans = 0, ty = q[0].typ, ans2 = 1, x = 0;
        for (PII u : q) {
            if (ty != u.typ) ans = 1;
            if (x && x > u.val) ans2 = 0;
            x = u.val; 
        }
        cout << (ans || ans2 ? "Yes\n" : "No\n");
    }
}