#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        string ans;
        for (int i = n - 1; i >= 0; i--){
            if (s[i] == '0'){
                ans += (char)('a' + stoi(s.substr(i - 2, 2)) - 1);
                i-=2;
            }else ans += (char)('a' + s[i] - '0' - 1);
        }
        cout << string(ans.rbegin(), ans.rend()) << '\n';
    }
}