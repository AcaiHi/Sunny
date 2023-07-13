#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
using PII = pair<char, int>;
#define id second
#define va first
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int n = s.length();
        vector<int> v(n); 
        iota(v.begin(), v.end(), 1);
        sort(v.begin(), v.end(), [&](const int x, const int y){
            return s.front() < s.back() ? 
                s[x - 1] != s[y - 1] ? s[x - 1] > s[y - 1] : x > y :
                s[x - 1] != s[y - 1] ? s[x - 1] < s[y - 1] : x > y;
        });
        int l = 0, r = n - 1;
        while (v[l] != 1 && v[l] != n) l++;
        while (v[r] != 1 && v[r] != n) r--;
        bool f = 0;
        vector<int> ans;
        while (l <= r) ans.push_back(v[l++]);
        if (v[r] == 1) reverse(ans.begin(), ans.end()); 
        cout << abs(s[0] - s.back()) << ' ' << ans.size() << endl;
        for (int x : ans) cout << x << ' ';
        cout << endl;
        
    }
}