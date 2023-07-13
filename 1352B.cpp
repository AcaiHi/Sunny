// 1352B.cpp
#include<iostream>
using namespace std;
int t, n, k, MAX;
bool solve(){
	int odd = n - (k - 1);
	int even = n - 2 * (k - 1);
	if ((odd & 1) && odd > 0){
		cout << "yes\n";
		cout << odd; while (--k) cout << " 1"; cout << "\n"; return 0;
	}
	else if ((even & 1) == 0 && even > 0){
		cout << "yes\n";
		cout << even; while (--k) cout << " 2"; cout << "\n"; return 0;
	}
	return 1;
}
int main(){
	cin >> t;
	while (t--){
		cin >> n >> k;
		if (solve()) cout << "No\n";
	}
}