#include<iostream>
#include<vector>
using namespace std;
using vv = vector<vector<char>>;
vv v;
int t, n, m;
void dfs(int x, int y){
    if (v[x + 1][y] == '.') swap(v[x][y], v[x + 1][y]), dfs(x + 1, y);
}
int main(){
    cin >> t;
    while (t--){
        cin >> n >> m;
        v = vv(n + 2, vector<char>(m + 2, 'o'));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> v[i][j];
        for (int i = n; i; i--)
            for (int j = m; j; j--)
                if (v[i][j] == '*') dfs(i, j);
        for (int i = 1; i < v.size() - 1; i++){
            for (int j = 1; j < v[i].size() - 1; j++)
                cout << v[i][j];
            cout << endl;
        }
    }
    
}