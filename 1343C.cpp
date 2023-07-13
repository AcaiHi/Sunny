// 1343C.cpp
#include<iostream>
using namespace std;
using ll = long long;
ll t, n, x, f;
int main(){
	cin >> t;
	while (t--){
		cin >> n >> x;
		ll sum = 0, f = x > 0, v = x, res = x;
		while (--n){
			cin >> x;
			if ((f && x < 0) || (!f && x > 0))
				sum =sum + res, f = x > 0, res = x;
			else res = max(res, x);
			v = max(v, x);
		}
		cout << sum + res << endl;
	}
}