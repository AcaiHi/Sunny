#include<iostream>
#include<deque>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        deque<int> ans;
        for (int x : q) {
            if(ans.empty() || ans.front() >= x) ans.push_front(x);
            else ans.push_back(x);
        }

        for (int x : ans) {
            cout << x << ' ';
        }

        cout << endl;
    }
}