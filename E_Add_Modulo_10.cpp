#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n; int q[n];
        set<int> s;
        int f = 1;
        for (int &it : q) {
            cin >> it;
            while (it % 10 != 2){
                it = it % 10 + it;
                if (it % 10 == 0) {
                    break;
                }
            }
            it % 10 ? s.insert(it % 20) : s.insert(it);
            if (s.size() > 1) f = 0;
        } 
        cout << (f ? "Yes\n" : "No\n");
    }
}