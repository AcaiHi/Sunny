#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool solve(string x, int n){
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++){
                string tmp;
                for (int u : {i, j, k}) tmp += x[u];
                if (stoi(tmp) % 8 == 0) {
                    cout << "YES\n" << tmp;
                    return 0;
                }
            }
    return 1;
}
int main(){
    string x; cin >> x;
    int n = x.length();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++){
            string tmp;
            for (int u : {i, j}){
                tmp += x[u];
                if (stoi(tmp) % 8 == 0) {
                    cout << "YES\n" << tmp;
                    return 0;
                }
            }
        }
    if ((x.back() - '0') % 8 == 0) {
        cout << "YES\n" << x.back();
        return 0;
    }
    
    cout << (solve(x, n) ? "NO\n":"\0");
}