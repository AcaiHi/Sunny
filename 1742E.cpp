//1742E.cpp
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll = long long;
int t, n, Q;
#define F first
#define S second
int main(){
	cin >> t;
	while (t--){
		cin >> n >> Q;
		int q[n]; for(int &it : q) cin >> it;
		vector<pair<ll, ll> > v;
		for (int i = 0; i < n; i++){
			if (v.empty()) v.emplace_back(q[i] * 1ll, q[i] * 1ll);
			else if (v.back().F < q[i]){
				v.emplace_back(q[i] * 1ll, v.back().S + q[i] * 1ll);
			}else v.back().S += q[i] * 1ll;
		}
		int len[v.size()];
		int i = 0;
		for (int &it : len) it = v[i++].F;
		while (Q--){
			int tar; cin >> tar;
			int l = lower_bound(len, len + v.size(), tar) - len;
			if (l == v.size() || (len[l] > tar)) l--;
			if (l == -1) cout << 0 << " ";
			else cout << v[l].S << " ";
		}
		cout << endl;
	}
}