// 1744B.cpp
#include<iostream>
using namespace std;
using ll = long long;
int add[2], t, n, k;
int main(){
	cin >> t;
	while (t--){
		add[0] = add[1] = 0;
		cin >> n >> k;
		ll sum = 0;
		int q[n]; for (int &x : q) cin >> x, add[x & 1]++, sum += x;
		while (k--){
			int a, b;
			cin >> a >> b;
			sum += add[a] * b;
			if (a && b & 1) add[0] += add[1], add[1] = 0;
			else if (!a && b & 1) add[1] += add[0], add[0] = 0;
			cout << sum << endl;
		}
	}
}