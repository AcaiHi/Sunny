#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        string ans1, ans2;
        ans1.assign(n.length(), '0'), ans2.assign(n.length(), '0');
        bool f = 0;
        for (int i = 0; i < n.length(); i++){
            int u = n[i] - '0';
            if (u & 1){
                int x = u / 2;
                int y = u / 2 + 1;
                if (f) ans2[i] = y + '0', ans1[i] = x + '0';
                else ans1[i] = y + '0', ans2[i] = x + '0';
                f = !f;
            }
            else ans1[i] = ans2[i] = (u / 2) + '0';
        }
        cout << stoi(ans2) << ' ' << stoi(ans1) << '\n';
    }
}