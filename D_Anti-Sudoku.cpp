#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        vector n(9, vector<char>(9));
        for (auto &x : n)
            for (auto &y : x) cin >> y;
        int j = 0;
        for (int i = 0, j = 0, l = 1; j < 9; i = l++)
            for (int k= 0; k < 3; k++, i += 3, j++)
                n[i][j] = n[i][j] == '9' ? '1' : n[i][j]+1;    
        for (auto x : n){
            for (char y : x) cout << y;
            cout << endl;
        }
    }
}