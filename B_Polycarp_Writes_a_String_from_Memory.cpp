#include<iostream>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        set<char> u;
        int d = 0;
        for (char x : s){
            if (!u.count(x) && u.size() == 3) d++, u.clear(), u.insert(x);
            else u.insert(x);
        }

        cout << d + 1<< '\n';
    }
}