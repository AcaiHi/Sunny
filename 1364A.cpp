// 1364A.cpp
#include<iostream>
using namespace std;
int t, n, k;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		int q[n]; for (int &it : q) cin >> it;
		int p[n] = {q[0]};
		int s[n] = {q[n - 1]};
		int ans = q[0] % k || q[n - 1] % k ? 1 : -1;
		for (int i = 1; i < n; i++){
			p[i] = p[i - 1] + q[i];
			s[i] = s[i - 1] + q[n - i -1];
			if (p[i] % k || s[i] % k) ans = i + 1;
		}
		cout << ans << endl;
	}
}