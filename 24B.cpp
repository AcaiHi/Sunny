// 24B.cpp
#include<iostream>
using namespace std;
const int N = 1e5 + 5;
int gcd(int a, int b){
	return b ? gcd(b, a % b) : a;
}
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int vis[N];
		int t[N];
		for (int i = 0; i < n; i++)
			cin >> t[i];
		int x = t[0] == 1 ? 1 : gcd(t[0], t[n - 1]);
		if (x == 1) cout << n << endl;
		else {
			int cnt = 1;
			for (int i = t[0]; i < t[n - 1]; i += x)
				cnt++;
			cout << cnt << endl;
		}
	}
}