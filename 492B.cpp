//492B.cpp
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
using dd = double;
const int N = 1005;
int q[N];
int main(){
	ios::sync_with_stdio(0);
	int n; cin >> n;
	int len; cin >> len;
	for (int i = 0; i < n; i++)
		cin >> q[i];
	sort(q, q + n);
	//for (int i = 0; i < n; i++) cout << q[i] << " ";
	dd ans = 0.0;
	for (int i = n - 1; i > 0; i--){
		double x = (double)(q[i] - q[i - 1]) / 2;
		ans = max(ans, x);
	}
	if (q[0]) ans = max(ans, (double)q[0]);
	if (q[n-1] ^ len) ans = max(ans, (double)(len - q[n-1]));
	cout << fixed << setprecision(10) << ans;
}