#include<iostream>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while (t--){
        cin >> n;
        int q[n];
        int f = 0, cnt = 0, na = 0, sum = 0;
        for (int &it : q){
            cin >> it; sum += it;
            if (it == -1 && f && !cnt) cnt = 4;
            else if (it == -1) na = 1, f =1;
            else f = 0;
        }
        if (na) sum += cnt;
        else sum -= 4;
        cout << sum  << "\n";
    }
}