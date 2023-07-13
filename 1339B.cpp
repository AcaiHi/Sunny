// 1339B.cpp
#include<iostream>
#include<algorithm>
using namespace std;

int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int q[n], q2[n], ans[n]; for (int &x : q) cin >> x;
		sort(q, q + n);  
		int r = n - 1, l = 0, k = n - 1;
		while (k >= 0){
			ans[k--] = q[l++];
			if (k >= 0) ans[k--] = q[r--];
		}
		for (int x : ans) cout << x << " ";
		cout << endl;	
	}
}