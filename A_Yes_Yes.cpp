#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s.front() == 'e') s = 'Y' + s;
        else if (s.front() == 's') s = "Ye" + s;
        bool f = 1;
        while (s.length() >= 3){
            if (s.substr(0, 3) == "Yes") s = s.substr(3);
            else break;
        }
        if ((s == "Y" || s == "Ye" || s.empty())) cout << "YES\n";
        else cout << "NO\n";
    }
}