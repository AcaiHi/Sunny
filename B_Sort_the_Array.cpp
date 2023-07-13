#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n; cin >> n;
    int i = 0, L = 0, R = 0;
    int q[n]; for (int &it : q) cin >> it;
    vector<int> v(q, q + n);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != q[i]) {
            L = i + 1;
            for (int j = i; j < n; j++) 
                if (v[j] == q[i]) R = j + 1;
            break;
        }
    }
    int maxi = L - 1, j = R - 1;
    while (j >= L && maxi <= R && q[j--] == v[maxi++]);
    if (j != L - 1) {cout << "no\n"; return 0;}
    for (j = R; j < n && q[j] == v[j]; j++);
    if (j == n || (!R && !L)) cout << "yes\n" << (L?:1) << " " << (R?:1) << endl;
    else cout << "no\n";
}