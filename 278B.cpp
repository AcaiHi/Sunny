// 278B.cpp
#include<iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int q[n], pre[n + 1] = {}, i = 1;
	for (auto &x : q) {
		cin >> x;
		pre[i] = pre[i - 1] + x;
		i++;
	}
	int cnt = 0, ans = 0, ss = 0;
	for (int i = 0, j = 0; i < n; i++){
		while (j < n && ss + q[j] <= m){
			ss += q[j];
			j++;
		}
		ans = max(ans, j - i);
		ss -= q[i];
	}
	cout << ans;
}