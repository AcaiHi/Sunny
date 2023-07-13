// 1324D.cpp
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;
#define F first
#define S second
int n;
int main(){
	cin >> n;
	ll t[n], s[n], i = 0;
	vector<int> Ssort(n);
	for (ll &x : t) cin >> x ;
	for (ll &x : s) cin >> x ;
	for (int &x : Ssort) x = t[i] - s[i++];

	ll ans = 0;
	sort(Ssort.begin(), Ssort.end());
	i = 0;
	for (int i = 0; i < n; i++){
		if (Ssort[i] <= 0) continue;
		int u = lower_bound(Ssort.begin(), Ssort.end(), -Ssort[i] + 1) - Ssort.begin();
		// cout << u << endl;
		ans += i - u;
	}
	cout << ans;
}