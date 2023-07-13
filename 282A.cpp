#include<iostream>
using namespace std;
int t,res;
int main(){
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        res += s[1] == '+';
        res -= s[1] == '-';
    } 
    cout << res;
}