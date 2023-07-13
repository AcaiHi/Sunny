// 1760C.cpp
#include<iostream>
using namespace std;
using ll = long long;
const int N = 2 * 1e5 + 5;
int n, t;
int q[N] = {0}, tmp[N] = {0}, f0[N] = {0}, f1[N] = {0};
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> q[i];
			if (i) f1[i] = f1[i - 1] + q[i];
			else f1[0] = q[i];
		}
		for (int i = n - 1;i >= 0; i--){
			if (i + 1 ^ n) 
				f0[i] = f0[i + 1];
			else f0[i] = 0;
			f0[i] += q[i] == 0;
		}
		fill(tmp, tmp + N, 0);
		int zero = 0;
		for (int i = n - 1; i >= 0; i--){
			if (q[i]) tmp[i] = zero;
			else {
				tmp[i] = 0;
				zero++;	
			}
		}
		int maxi = 0;
		for (int i = 0; i < n; i++){
			int x;
			if (q[i]){
				x = f1[i] - tmp[i] - 1;
			}
			else {
				x = -f1[i] + f0[i] - 1;
			}
			maxi = max(maxi, x);
		}
		ll res = 0;
		for (int i = 0; i < n; i++)
			res += tmp[i] * 1ll;
		cout << res + maxi* 1ll << "\n";
	}
}