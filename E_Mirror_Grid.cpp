#include<iostream>
#include<vector>
using namespace std;
using PII = pair<int, int>;
vector<vector<int> > g;
int t, n;
void rota(){
    vector tmp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            tmp[j][n - i - 1] = g[i][j];
    g = tmp;
}
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        g = vector<vector<int> >(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            for (int j = 0; j < n; j++)
                g[i][j] = s[j] - '0';
        }
        vector ro(n, vector<PII>(n));
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    if (g[j][k]) ro[j][k].first++;
                    else ro[j][k].second++;
            rota();
            
        }
        int res = 0;
        for (auto &i : ro)
            for (auto &j : i)
                if (j.first && j.second)
                    res += j.first > j.second ? j.second : j.first;
        cout << res / 4 << '\n';
    }
}