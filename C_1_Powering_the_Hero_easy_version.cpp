#include<iostream>
#include<queue>
using namespace std;
int main(){
    int t; cin>> t;
    while (t--){
        int n; cin >> n;
        int q[n]; for (int &it : q) cin >> it;
        priority_queue<long long> pq;
        long long ans = 0;
        for (int i = 0; i < n; i++){
            if (!q[i] && pq.size()) {
                ans += pq.top(); pq.pop();
            }else if (q[i]) pq.push(q[i]);
        }

        cout << ans << '\n';
    }
}