#include<iostream>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        string s1 = to_string(n), s2 = to_string(m);
        int b = 0;
        for (int i = s1.length(); i >= 0; i--)
            if (s1[i] >= '1') {b = s1[i] - '0'; break;}
        int st = 0;
        bool f = 0;
        // for (; st < s2.length() && !f; st++)
        //     for (int j = stoi(s2.substr(st, 2)); j >= 1; j--) 
        //         if ((b * j) % 10 == 0) {
        //             // cout << s2[st] - '0' << 'p';
        //             string th = to_string(j);
        //             if (th.length() == 2) s2[st] = th[0], s2[++st] = th[1];
        //             else s2[++st] = th[0];
        //             f = 1;
        //             break;
        //         }

        // cout << s2 << ' ';
        if (!f) st = 1;
        for (int i = st; i < s2.length(); i++)
            s2[i] = '0';
        m = stoi(s2);

        cout << 1ll * n * m << endl;
    }

}