#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string res;
        s[0] = s[0] - '1' + '0';
        cout << stoi(s) << endl;
    }
}