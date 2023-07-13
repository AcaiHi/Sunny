// 1609B.cpp
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    string s, tmp;
    int n, q, cnt = 0; cin >> n >> q >> s; tmp = s;
    for (int i = 0; i < s.length(); i++) 
        if (s.substr(i, 3) == "abc") cnt++;
    
    while (q--) {
        char c; int x; cin >> x >> c;
        x--;
        s[x] = c;
        if (s[x] != tmp[x]) {
            if (tmp[x] == 'a' && !(x + 2 >= s.length())){
                cnt -= (tmp.substr(x, 3) == "abc");
            }else if (tmp[x] == 'b' && !(x + 1 >= s.length() || x - 1 < 0)){
                cnt -= (tmp.substr(x - 1, 3) == "abc");
            }else if (tmp[x] == 'c' && !(x - 2 < 0)) {
                cnt -= (tmp.substr(x - 2, 3) == "abc");
            }

            if (s[x] == 'a' && !(x + 2 >= s.length())){
                cnt += (s.substr(x, 3) == "abc");
            }else if (s[x] == 'b' && !(x + 1 >= s.length() || x - 1 < 0)){
                cnt += (s.substr(x - 1, 3) == "abc");
            }else if (s[x] == 'c' && !(x - 2 < 0)) {
                cnt += (s.substr(x - 2, 3) == "abc");
            }            
        }
        cout << cnt << endl;
        tmp = s;
    }
}