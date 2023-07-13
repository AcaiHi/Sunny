#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a, b;
        for (int i = 0, x; i < n; i++){
            cin >> x;
            if (x & 1) a.push_back(x);
            else b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int suma = 0, sumb = 0;
        for (int x : a) suma += x;
        for (int y : b) sumb += y;
        cout << (suma < sumb ? "YES\n" : "NO\n");
    }
}