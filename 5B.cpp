#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
using ll = long long;

int main(){
    vector<string> s;
    string x;
    int maxlen = 0;
    while (getline(cin, x)) 
        s.push_back(x), maxlen = max(maxlen, (int)x.length());
    string st; st.assign(maxlen+2, '*');
    bool flag = 0;
    cout << st << endl;
    for (auto &x : s) {
        int space = maxlen - x.length();
        string sp; sp.assign(space / 2, ' ');
        if (space & 1) {
            x = !flag ? '*' + sp + x + sp + " " + '*' : '*' + sp + " " + x + sp + '*';
            flag = !flag;
        }else {
            x = '*' + sp + x + sp + '*';
        }
        cout << x << endl;
    }
    cout << st << endl;
}
