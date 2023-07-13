#include<iostream>
#include<vector>
using namespace std;
bool f = 0;
string s;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        cin >> s;
        bool f = 0;
        int x = 0, y = 0;
        for (char u : s){
            if (u == 'U') y++;
            else if (u == 'R') x++;
            else if (u == 'L') x--;
            else if (u == 'D') y--;
            if (x == 1 && y == 1) f = 1;

        }
        cout << (f ? "YES\n" : "NO\n");
    }
    
}