// 433B.cpp
#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
int t, n, i = 1;
int main(){
	cin >> n;
	ll q[n], p[n + 1][2] = {};
	for (ll &it : q) cin >> it, p[i][1] = p[i - 1][1] + it, i++;
	sort(q, q + n);
	for (int i = 1; i <= n; i++){
		p[i][0] = p[i - 1][0] + q[i - 1];
	}
	cin >> t;
	while (t--){
		int a, b, c;
		cin >> a >> b >> c;
		cout << p[c][a & 1] - p[b - 1][a & 1] << endl;
	}
}