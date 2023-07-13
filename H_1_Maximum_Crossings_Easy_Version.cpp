#include<iostream>
using namespace std;
using PII = pair<int, int>;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (q[i] >= q[j]) cnt++;
        cout << cnt << endl;
    }
}