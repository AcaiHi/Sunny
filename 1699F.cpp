// 1699F.cpp
#include<iostream>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		int q[n]; for (int &x : q) cin >> x;
		int l = q[0], r = q[n - 1], pl = 0, pr = n - 1;
		int ans = 0;
		while (pl < pr){
			while (l < r && pl < pr) l += q[++pl];
			while (l > r && pl < pr) r += q[--pr];
			if (l == r) ans = pl + n - pr + 1, l += q[++pl], r += q[--pr];
		}
		cout << ans << endl;
	}
}