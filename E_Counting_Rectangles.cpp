#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using i64 = long long;
using PII = pair<i64, i64>;
vector<vector<i64> > pr(1001, vector<i64>(1001));
vector<vector<i64> > sg(1001, vector<i64>(1001));
int main(){
    int t; cin >> t;
    while (t--){
        int n, Q; cin >> n >> Q;

        pr = vector(1001, vector<i64>(1001));
        sg = vector(1001, vector<i64>(1001));
        for (int i = 0, x, y; i < n; i++)
            cin >> x >> y, sg[x][y] += x * y;
        for (int i = 1; i <= 1000; i++){
            for (int j = 1; j <= 1000; j++){
                pr[i][j] = sg[i][j] + pr[i - 1][j] + pr[i][j - 1] - pr[i - 1][j - 1];
            }
        }
        while (Q--){
            int w, x, y, z; cin >> w >> x >> y >> z; y--, z--;
            cout << pr[y][z] - pr[y][x] - pr[w][z] + pr[w][x] << endl;
        }
        // cout << endl;
    }
}