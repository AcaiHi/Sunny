#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    map<char, int> m{{'S', 0}, {'M', 1}, {'L', 2}};
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        char l = s1.back(), r = s2.back();
        if (l == r){
            if (l == 'M') cout << "=\n";
            else if (l == 'S') {
                if (s1 == s2) cout << "=\n";
                else if (s1 > s2) cout << "<\n";
                else cout << ">\n";
            }else if (l == 'L'){
                if (s1 == s2) cout << "=\n";
                else if (s1 > s2) cout << ">\n";
                else cout << "<\n";
            }
        }else {
            if (m[l] > m[r]) cout << ">\n";
            else cout << "<\n";
        }
    }
}