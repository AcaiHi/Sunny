#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 987654321;
        for (int i = 1; i < 512; i++){
            string res = (bitset<9>(i).to_string());
            int sum = 0;
            string tmp;
            for (int i = 1; char x : res){
                if (x == '1') sum += i, tmp += to_string(i);
                i++;
            }
            if (sum == n) {ans = min(stoi(tmp), ans);}
        }
        cout << ans << endl;
    }
}