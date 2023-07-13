#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
using PII = pair<int, int>;
struct match{
    vector<string> p, ans;
    unordered_map<string, int> has; 
    string s;
    match(int n, string s) : s(s), p(n) {
        for (int i = 0; auto &it : p) 
            cin >> it, has.emplace(it, i++);
    }
    int find(){
        for (int st = 0, ed = 0; ed < s.length();){
            int pos = 0, id = -1, maxi = 0;
            for (int i = st; i <= ed; i++){
                for (int j = -1; auto x : p){
                    j++;
                    if (i + x.length() > s.length() || i + x.length() <= ed)
                        continue;
                    if (s.substr(i, x.length()) == x && i + x.length() > maxi)
                        pos = i, id = j, maxi = i + x.length();
                }
            }
            if (id == -1) {return 1;}
            else {
                string tmp = to_string(id + 1) + ' ' + to_string(pos + 1) + '\n';
                ans.push_back(tmp);
                if (maxi == s.length()) return 0;
                st = ed + 1, ed = maxi;
            }
        }
        return 1;
    }
    // int f2(){
    //     vector<int> m(s.length(), -1), pos(s.length());
    //     for (int i = 0; i < s.length(); i++){
    //         string str = s.substr(i);
    //         while (!str.empty()) {
    //             if (has.find(str) != has.end()){
    //                 m[i] = i + str.length() - 1;
    //                 pos[i] = has[str];
    //             }
    //             str.pop_back();
    //         }
    //     }
    //     for (int x : m) cout << x << ' '; cout << endl;
    //     for (int x : pos ) cout << x << ' '; cout << endl;
    //     // for (auto [x, y] : m) cout << x << ' ' << y << endl;
    //     for (int i = 0; i < s.length();){
    //         // if (m[i] == -1) return -1;
    //         int next = m[i], id = pos[i];
    //         for (int j = i; j <= m[i]; j++){
    //             if (next < m[j]) next = m[j], id = pos[j];
    //         }
    //         string tmp = to_string(id + 1) + ' ' + to_string(i + 1) + '\n';
    //         ans.push_back(tmp);
    //         // if (!m[next]) next++;
    //         cout << id << ' ';
    //         i = next;

    //         if (next == s.length() - 1) return 0;
    //     }
        
    //     return 0;
    // }
};
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int n; cin >> n;
        match m(n, s);
        
        if (m.find()) {
            cout << "-1\n";
        }else {
            cout << m.ans.size() << endl;
            for (auto x : m.ans) cout << x;
        }
    }
}