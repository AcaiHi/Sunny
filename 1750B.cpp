// 1750B.cpp
#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int t, n;
char x;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		ll l0 = 0, l1 = 0, ans = 0, res = 1;
		bool f = 0;
		cin >> x;
		f = x == '1';
		f ? l1++ : l0++;
		while (--n){
			cin >> x;
			if (x == '1') l1++;
			if (x == '0') l0++;
			
			if ((f && x == '1') || (!f && x == '0')) res++;
			else ans = max(ans, res * res), f = !f, res = 1;
		}
		cout << max({ans, l0 * l1, res * res}) << endl;
	}
}