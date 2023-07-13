// 977C.cpp
#include<iostream>
#include<algorithm>
using namespace std;
int t, n, k;
int main(){
	cin >> n >> k;
	int q[n]; for (int &it : q) cin >> it;
	sort(q, q + n);
	int res;
	if (k) res = q[k - 1];
	else res = q[0] - 1;
	int cnt = 0;
	for (int x : q) if (x <= res) cnt++;
	int ans = cnt == k && res >= 1 ? res : -1;
	cout << ans;
	
}