#include<iostream>
using namespace std;
string s;
int cnt, t;
int main(){
    cin >> t;
    cin.ignore();
    while (t--){
        getline(cin, s);
        if ((s[0] - '0' + s[2] - '0' + s[4] - '0') >= 2) cnt++;
    }
    cout << cnt << endl;

}