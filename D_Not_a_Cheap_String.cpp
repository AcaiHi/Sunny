#include<iostream>
#include<map>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; int c;
        cin >> s >> c;
        map<char, int> m;
        map<char, int> ha;
        for (char i = 'a'; i <= 'z'; i++) ha[i] = ha.size() + 1;
        int sum = 0;
        for (char x : s) m[x]++;
        map<char, int> has;
        for (int sum = 0; auto [x, y] : m){
            sum += ha[x] * y;
            has[x] = y;
            if (sum >= c){
                while (sum > c && has[x]--) sum -= ha[x];
                break;
            }
        }

        for (char x : s){
            if (has[x] > 0) cout << x;
            has[x]--;
        }

        cout << endl;
    }
}