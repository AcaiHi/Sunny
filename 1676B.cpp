//1676B.cpp
#include<iostream>
using namespace std;
using ll = long long;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		ll x, mini = 0xffffffff, res = 0;
		for (int i = 0; i < n; i++){
			cin >> x; res += x;
			mini = min(x, mini);
		}
		cout << res - mini * n << endl;
	}
}