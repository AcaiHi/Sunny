#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int dp[n + 1][3] = {};
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]);
        if (x == 1) {
            dp[i][1]++;
        }else if (x == 2){
            dp[i][2]++;
        }else if (x == 3){
            dp[i][2]++;
            dp[i][1]++;
        }
    }
    cout << n - *max_element(dp[n], dp[n] + 3);
}