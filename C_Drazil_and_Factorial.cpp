#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n; cin >> n;
    string ans;
    int res = 0;
    for (char x; n--;) {
        cin >> x;
        if (x == '1' || x == '0') continue;
        if (x == '9') ans += "3327";
        else if (x == '4') ans += "223";
        else if (x == '8') ans += "2227";
        else if (x == '6') ans += "35";
        else ans += x;
        // cout << ans.size() << ' ';
    } 
    sort(ans.begin(), ans.end(), [&](const char x, const char y){
        return x > y;
    });
    for (char x : ans) cout << x;

}